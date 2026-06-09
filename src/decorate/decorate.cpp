#include "decorate.h"
#include "iostream"
#include "gtest/gtest.h"
using namespace std;

class decorateTest : public ::testing::Test {
protected:
    decorateTest() {
    }
    ~decorateTest() override {
    }
    void SetUp() override {
    }
    void TearDown() override {
    }
};

TEST_F(decorateTest, normal) {

    //1. 需要先缓存，压缩，在加密，最后写入文件
    auto fileStream = std::make_unique<FileStream>();
    auto encryptStream = std::make_unique<EncryptDecorator>(std::move(fileStream));
    auto compressStream = std::make_unique<CompressDecorator>(std::move(encryptStream));
    auto cacheStream = std::make_unique<CacheDecorator>(std::move(compressStream));
    cacheStream->write("Hello, World!");


    //2. 只需要压缩和加密，不需要缓存
    auto fileStream1 = std::make_unique<FileStream>();
    auto encryptStream1 = std::make_unique<EncryptDecorator>(std::move(fileStream1));
    auto compressStream1 = std::make_unique<CompressDecorator>(std::move(encryptStream1));
    compressStream1->write("Hello, World!");
}
