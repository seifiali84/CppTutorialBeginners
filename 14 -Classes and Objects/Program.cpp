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

class Computer
{
public:
    string Motherboard;
    string CPU;
    int Ram;
    string GPU;
    int Storage;

    void Buy();
    void Sell();
};

vector<Computer> Inventory;

void Computer::Buy()
{
    Inventory.push_back(*this);
    cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << " Was Bought." << endl;
}

void Computer::Sell()
{
    // Find Index to Delete :
    int Index = 0;
    for (Computer c : Inventory)
    {
        if (c.Motherboard == Motherboard &&
            c.CPU == CPU &&
            c.GPU == GPU &&
            c.Ram == Ram &&
            c.Storage == Storage)
        {
            break;
        }
        Index++;
    }

    // Delete From Inventory :
    Inventory.erase(Inventory.begin() + Index);
    cout << Motherboard << " - " << CPU << " - " << GPU << " - " << Ram << " - " << Storage << " Was Sold." << endl;
}

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

    // Computer

    // Create Instances
    Computer c1;
    Computer c2;

    // Set c1 Attributes
    c1.Motherboard = "Asus z690";
    c1.CPU = "Intel i9-9900k";
    c1.GPU = "Nvidia GTX-1660Ti";
    c1.Ram = 12;
    c1.Storage = 1024;

    // Set c2 Attributes
    c2.Motherboard = "Asus b550";
    c2.CPU = "AMD Ryzen 5";
    c2.GPU = "Nvidia gt-730";
    c2.Ram = 8;
    c2.Storage = 3072;

    // Buy Computers and Add Them To Inventory
    c1.Buy();
    c2.Buy();

    // Sell c1
    c1.Sell();

    // Check Inventory :
    for (Computer c : Inventory)
    {
        cout << c.Motherboard << " - " << c.CPU << " - " << c.GPU << " - " << c.Ram << " - " << c.Storage << " Remains" << endl;
    }

    return 0;
}