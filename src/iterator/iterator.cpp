#include "gtest/gtest.h"
#include "Iterator.h"

#include <string>

class iteratorTest : public ::testing::Test {
protected:
    iteratorTest() {
    }
    ~iteratorTest() override {
    }
    void SetUp() override {
    }
    void TearDown() override {
    }
};

TEST_F(iteratorTest, iterate_collection_in_order) {
    MyCollection<std::string> collection;
    collection.add({"first", "second", "third"});

    Iterator<std::string>* iter = collection.GetIterator();

    EXPECT_EQ(iter->first(), "first");
    EXPECT_FALSE(iter->isDone());

    EXPECT_EQ(iter->next(), "second");
    EXPECT_EQ(iter->current(), "second");
    EXPECT_FALSE(iter->isDone());

    EXPECT_EQ(iter->next(), "third");
    EXPECT_EQ(iter->current(), "third");
    EXPECT_FALSE(iter->isDone());

    // iter->next();
    // EXPECT_TRUE(iter->isDone());
}
