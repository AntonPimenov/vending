#pragma once

#include "Snack.h"

class SnackSlot
{
    public:
        SnackSlot(const int size);
        void addSnack(Snack* snack);
        void show() const;


    private:
        int size_ { 0 };
        Snack** array_{ nullptr };
        int position_{ 0 };



};