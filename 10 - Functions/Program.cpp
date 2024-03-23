#include <iostream>
#include <string>

using namespace std;

void WriteSeparator()
{
    cout << "----------"
         << "\n";
    cout << "**********"
         << "\n";
    cout << "----------"
         << "\n";
}

string Hi()
{
    return "salam";
}

float PI()
{
    return 3.14;
}

void SayHi(string Name)
{
    cout << "Hi " << Name << "!\n";
}

int Sum(int a, int b)
{
    return a + b;
}

void Hello(string Name = "World")
{
    cout << "Hello " << Name << "\n";
}

void ShowMembers(string Names[])
{

    for (int i = 0; i < Names->size(); i++)
    {
        cout << i + 1 <<  " - " << Names[i] << "\n";
    }
}

int main()
{
    cout << "Hi Ali"
         << "\n";
    WriteSeparator();
    cout << "Hi Amin"
         << "\n";
    WriteSeparator();
    cout << "Hi Arshia"
         << "\n";

    cout << Hi() << "\n";

    int r = 2;
    float Area = PI() * r * r;
    cout << Area << "\n";

    SayHi("Ali");
    SayHi("Amin");

    cout << Sum(1, 2) << "\n";

    Hello("Ali");
    Hello();

    string Names[] = {"Ali", "Arshia", "Amin"};
    ShowMembers(Names);

    

    return 0;
}