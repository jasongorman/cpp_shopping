#include "basket.h"
#include "gtest/gtest.h"


TEST(BasketTotal, EmptyBasket) {
    Basket basket;
    EXPECT_DOUBLE_EQ(0.0, basket.total());
}
