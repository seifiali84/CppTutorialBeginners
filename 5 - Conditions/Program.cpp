#include <iostream>
#include <string>

using namespace std;

int main()
{
    // basic of if statement
    if (true)
    {
        cout << "if(true) works\n";
    }
    if (false)
    {
        cout << "This code will never run";
    }
    
    // Logical Operators :

    // &&
    cout << (true && true) << "\n";   // output : 1 (true)
    cout << (true && false) << "\n";  // output : 0 (false)
    cout << (false && false) << "\n"; // output : 0 (false)

    // ||
    cout << (true || true) << "\n";   // output : 1 (true)
    cout << (true || false) << "\n";  // output : 1 (true)
    cout << (false || false) << "\n"; // output : 0 (false)

    // !
    cout << (!true) << "\n";  // output : 0 (false)
    cout << (!false) << "\n"; // output : 1 (true)

    cout << "Enter your number : ";
    int Number;
    cin >> Number;
    if ((Number % 2) == 0)
    {
        cout << "this is an even number.\n";
    }
    else
    {
        // اگر عدد زوج نباشه پس فرده و میتونیم وقتی زوج نبود بگیم که اون عدد فرده.
        cout << "this is an odd number.\n";
    }

    // just say to Ali :
    cout << "What is your name ? ";
    string Name;
    cin >> Name;

    if (Name == "Ali")
    {
        cout << "salam Ali, tamrinaro neveshti?\n";
    }

    // Username and Password System :
    cout << "Enter your username : ";
    string username;
    cin >> username;

    cout << "Enter your password : ";
    string password;
    cin >> password;

    if ((password == "1234") && (username == "seifiali"))
    {
        cout << "Welcome to your account.\n";
    }
    else
    {
        cout << "Your username or Password is incorrect.\n";
    }

    // if in if :
    if (1 > 0)
    {                      // اگر 1 بزرگتر از 0 بود
        cout << "1 > 0\n"; // بنویس که 1 بزرگ تر از صفره
        if (50 < 1)
        {                       // اگر 50 کوچیک تر از 1 بود
            cout << "50 < 1\n"; // بنویس که 50 کوچیک تر از یکه
        }
        else
        {                        // اگر 50 کوچیک تر از 1 نبود
            cout << "50 >= 1\n"; // نقیض گزاره ی شرط قبلی رو نوشتم
        }
    }
    else
    {                     // اگر 1 بزرگتر از 0 نبود
        cout << "1 <= 0"; // بنویس 1 کوچیکتر یا مساوی با صفره.
    }
    return 0;
}