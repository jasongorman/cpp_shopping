#include "gtest/gtest.h"

class Basket {
    public:
    double total(){ return 0.0; };
};

TEST(BasketTotalTest, EmptyBasket) {
    Basket basket;
    EXPECT_DOUBLE_EQ(0.0, basket.total());
}