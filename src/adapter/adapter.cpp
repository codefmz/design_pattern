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
    std::unique_ptr<VLCPlayer> vlcPlayer = std::make_unique<VLCPlayer>();
    auto player = std::make_unique<VLCPlayerAdapter>(std::move(vlcPlayer));
    player->play("test.mp4");
}