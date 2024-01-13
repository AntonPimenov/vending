#include "VendingMachine.h"

#include <iostream>

VendingMachine::VendingMachine(const int size) : size_{ size}
{
    array_ = new SnackSlot*[size_];
    for (size_t i = 0; i < size_; ++i)
    {
        array_[i] = nullptr;
    }

}

 void VendingMachine::addSlot(SnackSlot* slot)
{
     array_[position_] = slot;
     ++position_;   
}

void VendingMachine::show() const
{
    for (size_t i = 0; i < position_; ++i)
    {
        std::cout << "slot " << i + 1 << ": \n";
        array_[i]->show();
    }
}

int VendingMachine::getEmptySlotsCount() const
{
    return size_ - position_;
}