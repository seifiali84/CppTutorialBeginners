#include <iostream>
#include <string>

using namespace std;

int main(){
    string food = "Pizza";

    string &meal = food;

    cout << food << "\n"; // res : Pizza
    cout << meal << "\n"; // res : Pizza

    meal = "Hamburger";

    cout << food << "\n"; // res : Hamburger
    cout << meal << "\n"; // res : Hamburger

    cout << &food << "\n"; // res : 0xfe23a8

    string* ptr = &food; // ptr = 0xf323a8

    cout << ptr << "\n"; // res : 0xfe23a8

    cout << *ptr << "\n"; // res : Hamburger

    *ptr = "Pizza";
    cout << *ptr << "\n"; // res : Pizza    

    return 0;
}