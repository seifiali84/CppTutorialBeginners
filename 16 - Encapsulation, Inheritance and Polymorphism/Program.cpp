#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle
{
public:
	string brand;
	void honk()
	{
		cout << "Tuut, tuut! \n";
	}
};

// Derived class
class Car : public Vehicle
{
public:
	string model;
};

// Base Class (Person)
class Person
{
public:
	string Name;
	string Family;
};

// Derived Class (Employee)
class Employee : public Person
{
private:
	int Income;

public:
	void SetIncome(int income)
	{
		Income = income;
	}
	int GetIncome()
	{
		return Income;
	}
};

// Derived Class (Customer)
class Customer : public Person
{
public:
	string PhoneNumber;
	void BuyProduct()
	{
		cout << Name << " bought something." << endl;
	}
};

// Multi-Level Inheritance

// Grand Parent Class
class Appliance
{
public:
	string Name;
};

// Parent Class
class EAppliance : public Appliance
{
public:
	int Voltage;
	void TurnOn()
	{
		cout << Name << " Turned On." << endl;
	}
};

// Child Class
class VacuumCleaner : public EAppliance
{
public:
	int Power;
};

// Multipe Inheritance

// Base Class 1
class BackEndDev
{
public:
	string PL; // Programming Language
	void CreateBackEnd()
	{
		cout << "Backend Created" << endl;
	}
};

// Base Class 2
class FrontEndDev
{
public:
	int jsLevel;
	void CreateFrontEnd()
	{
		cout << "FrontEnd Created" << endl;
	}
};

// Derived Class From Base Class 1 and Base Class 2
class FullStackDev : public BackEndDev, public FrontEndDev
{
public:
	void CreateWebsite()
	{
		cout << "Website Created" << endl;
	}
};

// protected Access Specifier
class BaseClass
{
protected:
	int Status;
};

class DerivedClass : public BaseClass
{
public:
	int GetStatus()
	{
		return Status;
	}
	void SetStatus(int status)
	{
		Status = status;
	}
};

// Polymorphism
class Math
{
public:
	// Square Of x
	static int Pow(int x)
	{
		return x * x;
	}
	// x^n
	static int Pow(int x, int n)
	{
		int res = x;
		for (int i = 0; i < n - 1; i++)
		{
			res *= x;
		}
		return res;
	}
};

// Base class
class Animal
{
public:
	void animalSound()
	{
		cout << "The animal makes a sound \n";
	}
};

// Derived class
class Pig : public Animal
{
public:
	void animalSound()
	{
		cout << "The pig says: wee wee \n";
	}
};

// Derived class
class Dog : public Animal
{
public:
	void animalSound()
	{
		cout << "The dog says: bow wow \n";
	}
};

int main()
{
	// Car Example
	Car c1;
	c1.brand = "Ford";
	c1.model = "Mustang";
	c1.honk();
	cout << c1.brand + " " + c1.model << endl;

	// Company Example
	// Create an Employee
	Employee e1;
	e1.Name = "Ali";
	e1.Family = "Seifi";
	e1.SetIncome(120);

	cout << e1.Name << " " << e1.Family << " Income  : " << e1.GetIncome() << endl;
	// Create a Customer

	Customer c;
	c.Name = "Mohammad";
	c.Family = "Ghorbani";
	c.PhoneNumber = "09123456789";
	c.BuyProduct();

	// Multiple Inheritance
	FullStackDev fsd;
	fsd.PL = "Python";
	fsd.jsLevel = 12;
	fsd.CreateBackEnd();
	fsd.CreateFrontEnd();
	fsd.CreateWebsite();

	// Protected Access Specifier
	DerivedClass dc;
	dc.SetStatus(404);
	cout << "Status : " << dc.GetStatus() << endl;

	// Polymorphism

	// Method Overloading Test
	cout << Math::Pow(2) << endl;
	cout << Math::Pow(2, 10) << endl;

	// Method Overriding Test
	Animal myAnimal;
	Pig myPig;
	Dog myDog;

	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();

	return 0;
}