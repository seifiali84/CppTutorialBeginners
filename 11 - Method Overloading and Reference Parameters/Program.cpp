#include <iostream>
#include <string>

using namespace std;

void SayHi(string &Name)
{
    cout << "Hi " << Name << "\n";
}

int Sum(int num1, int num2)
{
    return num1 + num2;
}
string Sum(string text1, string text2)
{
    return text1 + " " + text2;
}
int SumTotal(int k)
{
    if (k > 0)
    {
        return k + SumTotal(k - 1);
    }
    else
    {
        return 0;
    }
}

int Factorial(int number)
{
    if (number > 0)
    {
        return number * Factorial(number - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    // Reference Parameter :
    string Name = "Ali";
    SayHi(Name);

    // Function Overloading (Method Overloading) :
    cout << Sum(10, 20) << "\n";
    cout << Sum("Ali", "Seifi") << "\n";

    // Recursion Function :
    cout << SumTotal(3) << "\n"; // 3 + 2 + 1
    cout << Factorial(3) << "\n"; // 3 * 2 * 1

    return 0;
}