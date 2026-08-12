//
// Created by jason on 12/08/2026.
//

#ifndef C___SKELETON_BASKET_H
#define C___SKELETON_BASKET_H

class Item {
public:

    Item(double price, int quantity){};
};

class Basket {
public:
    double total(){ return _items.empty() ? 0.0 : 9.99; }

    std::vector<Item> _items;

    void add(Item item) {
        _items.push_back(item);
    };
};

#endif //C___SKELETON_BASKET_H