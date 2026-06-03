#include "Ingredient.h"

Ingredient::Ingredient()
{
    name = "";
    cookingTime = 0;
}

Ingredient::Ingredient(const std::string& name, int time)
{
    this->name = name;
    this->cookingTime = time;
}

std::string Ingredient::getName() const
{
    return name;
}

int Ingredient::getCookingTime() const
{
    return cookingTime;
}


bool Ingredient::operator<(const Ingredient& other) const
{
    return cookingTime > other.cookingTime;
}

std::ostream& operator<<(std::ostream& os,
    const Ingredient& ingredient)
{
    os << ingredient.name
        << " (" << ingredient.cookingTime << " sec)";
    return os;
}