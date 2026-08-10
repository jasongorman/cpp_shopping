//
// Created by jason on 10/08/2026.
//

#ifndef C___SKELETON_BASKET_H
#define C___SKELETON_BASKET_H
#include <vector>

#endif //C___SKELETON_BASKET_H

class Item {
public:

    Item(double price, int quantity){};
};

class Basket {
    std::vector<Item> _items;
public:
    double total(){ return _items.empty() ? 0.0 : 9.99; }

    void addItem(Item item) {
        _items.push_back(item);
    };
};