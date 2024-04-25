#include <iostream>
#include <string>

using namespace std;

// Syntax
struct A
{
    int Attribute;
};

struct human
{
    string Name;
    string Family;
    int Age;
};

struct Car
{
    string Model;
    string Plate;
};

// Add Function to Struct
struct Car2
{
    string Model;
    string Plate;

    void introduce()
    {
        cout << Model << " - " << Plate;
    }
};

int main()
{
    // Syntax
    A VariableName;
    VariableName.Attribute = 12;

    // Human
    human h1;
    h1.Name = "Ali";
    h1.Family = "Seifi";
    h1.Age = 18;

    cout << h1.Name << "\n";
    cout << h1.Family << "\n";
    cout << h1.Age << "\n";

    // Car
    // define variables
    Car car1;
    Car car2;

    // set car1 information
    car1.Model = "Benz";
    car1.Plate = "12b435";

    // set car2 information
    car2.Model = "Pride";
    car2.Plate = "52a523";

    // show cars information
    cout << "Car 1 : " << car1.Model << " | " << car1.Plate << "\n";
    cout << "Car 2 : " << car2.Model << " | " << car2.Plate << "\n";

    // Not Named Structure
    struct
    {
        string Name;
        string Family;
        int Age;
    } human1;

    // set human1 information
    human1.Name = "Ali";
    human1.Family = "Seifi";
    human1.Age = 18;

    // show human1 information
    cout << "Name : " << human1.Name << " | Family : " << human1.Family << " | Age : " << human1.Age << "\n";

    // Create Multi-Variable from Not Named Structure
    // define structure and variables
    struct
    {
        string Model;
        string Plate;
    } car3, car4, car5;

    // set car1 infromation
    car3.Model = "Benz";
    car3.Plate = "10T456";

    // set car2 information
    car4.Model = "Pride";
    car4.Plate = "24A874";

    // set car3 information
    car5.Model = "peugeot";
    car5.Plate = "14L154";

    // show cars infromation
    cout << "Car 1 : " << car3.Model << " | " << car3.Plate << "\n";
    cout << "Car 2 : " << car4.Model << " | " << car4.Plate << "\n";
    cout << "Car 3 : " << car5.Model << " | " << car5.Plate << "\n";

    // Use Struct Functions
    Car2 c1;
    c1.Model = "Benz";
    c1.Plate = "71B234";

    c1.introduce();
    cout << "\n";

    return 0;
}