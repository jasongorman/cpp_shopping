#include "basket.h"
#include "gtest/gtest.h"


TEST(BasketTotal, EmptyBasket) {
    Basket basket;
    EXPECT_DOUBLE_EQ(0.0, basket.total());
}

TEST(BasketTotal, SingleItemWithQuantityOf1) {
    Basket basket;
    basket.add(Item(9.99, 1));
    EXPECT_DOUBLE_EQ(9.99, basket.total());
}
