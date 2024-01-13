#pragma once

#include "SnackSlot.h"

class VendingMachine
{
    public:
        VendingMachine(const int size);
        void addSlot(SnackSlot* slot);
        void show() const;
        int getEmptySlotsCount() const;


    private:
        int size_{ 0 };
        SnackSlot** array_{ nullptr };
        int position_{ 0 };

};