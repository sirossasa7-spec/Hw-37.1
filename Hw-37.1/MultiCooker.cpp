#include "MultiCooker.h"
#include <iostream>

void MultiCooker::addIngredient(const Ingredient& ingredient)
{
    ingredients.push(ingredient);
}

bool MultiCooker::isEmpty() const
{
    return ingredients.empty();
}

void MultiCooker::cookDish()
{
    if (ingredients.empty())
    {
        std::cout << "No ingredients!\n";
        return;
    }

    std::cout << "\nCooking process:\n";

    while (!ingredients.empty())
    {
        Ingredient current = ingredients.top();
        ingredients.pop();

        std::cout << "Cooking "
            << current.getName()
            << " for "
            << current.getCookingTime()
            << " seconds\n";
    }

    std::cout << "\nDish is ready!\n";
}