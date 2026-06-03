#pragma once
#include <queue>
#include "Ingredient.h"

class MultiCooker
{
private:
    std::priority_queue<Ingredient> ingredients;

public:
    void addIngredient(const Ingredient& ingredient);
    void cookDish();
    bool isEmpty() const;
};