#include "gtest/gtest.h"
#include "adapter.h"

class adapterTest : public ::testing::Test {
protected:
    adapterTest() {
    }
    ~adapterTest() override {
    }
    void SetUp() override {
    }
    void TearDown() override {
    }
};

TEST(adapterTest, client) {
    std::shared_ptr<Target> target = std::make_shared<Adapter>();
    std::shared_ptr<Adaptee> adaptee = std::make_shared<Adaptee>();
    adaptee->setAdapter(target);
    adaptee->specificRequest();
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}