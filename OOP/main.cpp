#include <iostream>
#include "animal.h"
#include "farm.h"

using namespace std;

int main()
{
    Farm farm;

    // Add animals to the farm
    farm.addAnimal(Animal("Bessie", "Cow", 4, "Moo"));
    farm.addAnimal(Animal("Clucky", "Chicken", 1, "Cluck"));
    farm.addAnimal(Animal("Charlie", "Goat", 3, "Bleat"));
    farm.addAnimal(Animal("Ducky", "Duck", 2, "Quack"));

    // Show all animals
    farm.showAnimals();
    cout << endl;

    // Display total animal count
    cout << "Total number of animals: " << farm.getAnimalCount() << endl;
    cout << endl;

    // Classify animals
    farm.classifyAnimals();
    return 0;
}