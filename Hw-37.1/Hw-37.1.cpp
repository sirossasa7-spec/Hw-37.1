#include <iostream>
#include "MultiCooker.h"

using namespace std;

int main()
{
    MultiCooker cooker;

    int choice;

    do
    {
        cout << "\nEnter what you want to do:\n";
        cout << "1 - Add ingredient\n";
        cout << "2 - Cook a dish\n";
        cout << "0 - Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int time;

            cout << "Enter name of ingredient: ";
            cin >> name;

            cout << "Enter time of cooking(seconds): ";
            cin >> time;

            cooker.addIngredient(Ingredient(name, time));
            break;
        }

        case 2:
            cooker.cookDish();
            break;

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Wrong choice!\n";
        }

    } while (choice != 0);

    return 0;
}