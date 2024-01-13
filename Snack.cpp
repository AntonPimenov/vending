#include "Snack.h"

Snack::Snack(const std::string& name) : name_{ name } {}

std::string Snack::getName() const
{
    return name_;
}