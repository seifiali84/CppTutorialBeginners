#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // Define Variables :
    int Number1 = 12;
    float Pi = 3.14;
    double RootOf2 = 1.41;
    string text = "this is a text";
    char c1 = '!';
    bool Condition = true;

    // Define Variable before setting value :
    int Number2;
    Number2 = 24;

    // Get Size of DataTypes :
    /* برای گرفتن اندازه ی هرکدوم از انواع داده ها میتونید از خود سی پلاس پلاس هم کمک بگیرید */
    cout << "int Size : " <<  sizeof(int) << "\n"; // res : 4 (Bytes)
    cout << "float Size : " << sizeof(float) << "\n"; // res : 4
    cout << "double Size : " << sizeof(double) << "\n"; // res : 8
    cout << "bool Size : " << sizeof(bool) << "\n"; // res : 1
    cout << "string Size : " << sizeof(string) << "\n"; // res : 32
    cout << "char Size : " << sizeof(char) << "\n"; // res : 1

    // Read data from variable :
    cout << Number1;

    // Change variable data :
    string T = "First Text";
    cout << T << "\n";
    T = "Second Text";
    cout << T << "\n";

    // Constants :
    const string PROGRAM_SAY = "My Program Says : ";
    cout << PROGRAM_SAY << "output 1\n";
    cout << PROGRAM_SAY << "output 2";

    return 0;
}