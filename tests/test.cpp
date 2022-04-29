#include "gtest/gtest.h"

#include "../header/rectangle.hpp"

TEST(PeriTest,Same){
    Rectangle rect;
    rect.set_width(1);
    rect.set_height(1);
    EXPECT_EQ(4,rect.perimeter());
}

TEST(PeriTest,Zero){
    Rectangle rect;
    rect.set_width(0);
    rect.set_height(0);
    EXPECT_EQ(0,rect.perimeter());
}

TEST(PeriTest,Different){
    Rectangle rect;
    rect.set_width(3);
    rect.set_height(1);
    EXPECT_EQ(8,rect.perimeter());
}
TEST(AreaTest,Same){
    Rectangle rect;
    rect.set_width(1);
    rect.set_height(1);
    EXPECT_EQ(1,rect.area());
}

TEST(AreaTest,Zero){
    Rectangle rect;
    rect.set_width(0);
    rect.set_height(0);
    EXPECT_EQ(0,rect.area());
}

TEST(AreaTest,Different){
    Rectangle rect;
    rect.set_width(3);
    rect.set_height(2);
    EXPECT_EQ(6,rect.area());
}

TEST(RecConstructor,Same) {
        Rectangle rect(1,1);
        EXPECT_EQ(rect.get_width(), 1);
        EXPECT_EQ(rect.get_height(), 1);
}
TEST(RecConstructor,Zero) {
        Rectangle rect;
        EXPECT_EQ(rect.get_width(),0);
        EXPECT_EQ(rect.get_height(),0);
}

TEST(RecConstructor,Different) {
        Rectangle rect(1,3);
        EXPECT_EQ(rect.get_width(),1);
        EXPECT_EQ(rect.get_height(),3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
