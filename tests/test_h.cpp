#include <gtest/gtest.h>
#include "../include/main.h"

TEST(MacroTest, SQRTest) {
  EXPECT_EQ(SQR(2), 4);
  EXPECT_EQ(SQR(-3), 9);
  EXPECT_EQ(SQR(0), 0);
}