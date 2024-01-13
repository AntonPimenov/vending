#include "SnackSlot.h"

#include <iostream>

SnackSlot::SnackSlot(const int size) : size_{ size }
{
    array_ = new Snack*[size_];
    for (size_t i = 0; i < size_; ++i)
    {
        array_[i] = nullptr;
    }
}
void SnackSlot::addSnack(Snack* snack)
{
    array_[position_] = snack;
    ++position_;
}
void SnackSlot::show() const
{
    for (size_t i = 0; i < position_; ++i )
    {
        std::cout <<  "position " << i + 1 << ": " << array_[i]->getName() << "\n";
    }
}