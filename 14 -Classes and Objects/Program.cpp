#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fruit
{
public:
    string Name;
    string Color;
    float Weight;
};

class Animal
{
public:
    string Name;
    bool IsWild;
    int LegsCount;
};

int main()
{
    // Fruit

    // Create Instances
    Fruit Apple;
    Fruit Banana;
    Fruit Pear;

    // set Apple Attributes
    Apple.Name = "Apple";
    Apple.Color = "Red";
    Apple.Weight = 100.0f;

    // set Banana Attributes
    Banana.Name = "Banana";
    Banana.Color = "Yellow";
    Banana.Weight = 130.0f;

    // set Pear Attributes
    Pear.Name = "Pear";
    Pear.Color = "Yellow";
    Pear.Weight = 110.0f;

    // Fruit Fruits[3];
    // Fruits[0] = Apple;
    // Fruits[1] = Banana;
    // Fruits[2] = Pear;

    // Create a vector of Objects :
    vector<Fruit> Fruits;
    Fruits.push_back(Apple);
    Fruits.push_back(Banana);
    Fruits.push_back(Pear);

    for (Fruit f : Fruits)
    {
        cout << "Name : " << f.Name << " - Color : " << f.Color << " - Weight : " << f.Weight << endl;
    }

    // Animal

    // Create Instances
    Animal Dog;
    Animal Chicken;
    Animal Fish;

    // Set Dog Attributes
    Dog.Name = "Dog";
    Dog.IsWild = false;
    Dog.LegsCount = 4;

    // Set Chicken Attributes
    Chicken.Name = "Chicken";
    Chicken.IsWild = false;
    Chicken.LegsCount = 2;

    // Set Fish Attributes
    Fish.Name = "Fish";
    Fish.IsWild = false;
    Fish.LegsCount = 0;

    // Create a Vector of Animals
    vector<Animal> Animals;
    Animals.push_back(Dog);
    Animals.push_back(Chicken);
    Animals.push_back(Fish);

    for (Animal a : Animals)
    {
        cout << "Name : " << a.Name << " - Legs : " << a.LegsCount << " - Is Wild? " << a.IsWild << endl;
    }

    return 0;
}