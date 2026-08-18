#include "gtest/gtest.h"
#include "basket.h"

TEST(BasketTotalTest, EmptyBasket) {
    Basket basket;
    EXPECT_DOUBLE_EQ(0.0, basket.total());
}