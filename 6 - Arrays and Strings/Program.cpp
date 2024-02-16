#include <iostream>
#include <string>

using namespace std;
int main()
{
    // Syntax
    string Cars[] = {"Benz", "BMW", "Pride"};
    cout << Cars[2] << "\n"; // سومین عضو از لیست.

    // working with Arrays
    int Numbers[12];

    Numbers[0] = 1; // مقدار دهی به خونه ی اول
    Numbers[1] = 2; // مقدار دهی به خونه ی دوم

    cout << Numbers[0] << "\n"; // نمایش خونه ی اول
    Numbers[0] = 20;            // تغییر مقدار خونه ی اول
    cout << Numbers[0] << "\n"; // نمایش خونه ی اول

    // size() and sizeof()
    float Scores[] = {14.5, 12.3, 18.9};
    cout << sizeof(Scores) << "\n"; // show size of Score in RAM

    // show number of members :
    cout << sizeof(Scores) / sizeof(float) << "\n"; // show number of Score members.
    cout << size(Scores) << "\n";                   // show number of Score members.

    // Strings

    // definition :
    char MyText[] = "Hello World!";
    cout << MyText << "\n";

    // get first of Array
    string Text = "This is a text";
    cout << Text[0] << "\n";

    // get last of Array
    cout << Text[size(Text) - 1] << "\n";

    // get input using cin :
    cout << "\nEnter your input(cin) : ";
    string cinInput;
    cin >> cinInput;
    cout << "this is your input in cin : " << cinInput << "\n";

    // get input using getline() :
    cout << "\nEnter your input(getline) : ";
    string getlineInput;
    getline(cin, getlineInput);
    cout << "this is your input in getline() : " << getlineInput << "\n";

    // Practice 1
    string Name1;
    getline(cin, Name1);
    Name1[0] = 'P';
    cout << "your new name : " << Name1 << "\n";

    // Practice 2
    string Name2;
    getline(cin, Name2);

    char first = Name2[0];

    int Length = size(Name2);

    Name2[0] = Name2[Length - 1];
    Name2[Length - 1] = first;

    cout << "your new name : " << Name2 << "\n";

    // Multi dimensional Arrays :

    // Two Dimensional :
    int rect[3][4];
    rect[0][0] = 1;
    rect[0][1] = 2;
    rect[0][2] = 3;
    rect[0][3] = 4;
    rect[1][0] = 5;
    rect[1][1] = 6;
    rect[1][2] = 7;
    rect[1][3] = 8;
    rect[2][0] = 9;
    rect[2][1] = 10;
    rect[2][2] = 11;
    rect[2][3] = 12;

    cout << "rect[1][2] : " << rect[1][2] << "\n";
    int rect2[3][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}};

    cout << "rect2[1][2] : " << rect2[1][2] << "\n";

    // 3D Array :
    int Cube[2][2][2] = {
        {{1, 2},
         {3, 4}},

        {{5, 6},
         {7, 8}}};
    cout << "Cube[1][0][1] : "<< Cube[1][0][1] << "\n"; 
    
    
    return 0;
}