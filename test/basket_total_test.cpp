#include "gtest/gtest.h"
#include "basket.h"

TEST(BasketTotal, EmptyBasket) {
    Basket basket;
    EXPECT_DOUBLE_EQ(0.0, basket.total());
}
