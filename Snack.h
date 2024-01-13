#pragma once
#include <string>

class Snack
{
    public:
    Snack(const std::string& name);

    std::string getName() const;


    private:
    std::string name_;

};