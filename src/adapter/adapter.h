#pragma once

#include <iostream>
#include <memory>

class Target {
public:
    virtual ~Target() = default;
    virtual void request() = 0;
};

class Adapter : public Target {
public:
    void request() override {
        std::cout << " adapter improve target request." << std::endl;
    }
};

class Adaptee {
public:
    void specificRequest() {
        std::cout << " specific request before. " << std::endl;
        target->request();
        std::cout << " specific request after. " << std::endl;
    }

    void setAdapter(std::shared_ptr<Target> target) {
        this->target = target;
    }
private:
    std::shared_ptr<Target> target;
};