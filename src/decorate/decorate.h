#pragma once
#include <iostream>
#include <memory>

class Stream {
public:
    virtual ~Stream() = default;
    virtual void write(const std::string &data) = 0;
};

// 文件需要，加密 + 压缩 + 缓存， 两者可以自由组合，如果直接使用继承的方式，会有15种，类会爆炸，装饰模式可以解决这个问题

class FileStream : public Stream {
public:
    void write(const std::string &data) override {
        std::cout << "write data to file" << std::endl;
    }
};


class Decorator : public Stream {
public:
    explicit Decorator(std::unique_ptr<Stream> stream) : stream(std::move(stream)) {
    }
    void write(const std::string &data) override {
        stream->write(data);
    }
private:
    std::unique_ptr<Stream> stream;
};

class EncryptDecorator : public Decorator {
public:
    explicit EncryptDecorator(std::unique_ptr<Stream> stream) : Decorator(std::move(stream)) {
    }
    void write(const std::string &data) override {
        std::cout << "encrypt data" << std::endl;
        Decorator::write(data);
    }
};

class CompressDecorator : public Decorator {
public:
    explicit CompressDecorator(std::unique_ptr<Stream> stream) : Decorator(std::move(stream)) {
    }
    void write(const std::string &data) override {
        std::cout << "compress data" << std::endl;
        Decorator::write(data);
    }
};  

class CacheDecorator : public Decorator {
public:
    explicit CacheDecorator(std::unique_ptr<Stream> stream) : Decorator(std::move(stream)) {
    }
    void write(const std::string &data) override {
        std::cout << "cache data" << std::endl;
        Decorator::write(data);
    }
};