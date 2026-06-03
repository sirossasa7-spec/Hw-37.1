#pragma once
#include <iostream>
#include <string>

class Ingredient
{
private:
    std::string name;
    int cookingTime;

public:
    Ingredient();
    Ingredient(const std::string& name, int time);

    std::string getName() const;
    int getCookingTime() const;

    
    bool operator<(const Ingredient& other) const;

    friend std::ostream& operator<<(std::ostream& os,
        const Ingredient& ingredient);
};