#include <iostream>

using namespace std;

int main()
{
     // Operators :
     cout << 12 + 10 << "\n"; // output : 22
     cout << 12 - 10 << "\n"; // output : 2
     cout << 3 * 4 << "\n"; // output : 12
     cout << 8 / 2 << "\n"; // output : 4
     cout << 5 % 2 << "\n"; // output : 1

     // Increment and Decrement
     int Num = 10;
     Num++;
     cout << Num << "\n"; // output : 11
     Num--;
     cout << Num << "\n"; // output : 10

     int x = 0;
     int y = x++;
     x = 0;
     int z = ++x;
     cout << y << "\n" // output 0
          << z << "\n"; // output 1

     // Easy way :
     x = 10; // set x equal 10 
     x += 10; // add 10 to x
     x -= 10; // subtract 10 from x
     x *= 10; // Multiply x by 10
     x /= 10; // devide x by 10
     x %= 10; // Put x equal to its remainder by 10

     // Comparison Operators
     cout << (1 == 1) << "\n"; // output : 1 (true)
     cout << (1 == 3) << "\n"; // output : 0 (false)

     cout << ("12" != "2") << "\n"; // output : 1 (true)
     cout << ("12" != "12") << "\n"; // output : 0 (false)

     float a1 = 2.2;
     int a2 = 2;
     cout << (a1 == a2) << "\n"; // output : 0 (false)
     cout << (12 == 12.0) << "\n"; // output : 1 (true)

     cout << (11 < 20) << "\n"; // output : 1 (true)
     cout << (10 > 1) << "\n"; // output : 1 (true)
     cout << (10 <= 10) << "\n"; // output : 1 (true)
     cout << (20 >= 19) << "\n"; // output : 1 (true)

     // User inputs :
     string input;
     cin >> input;
     cout << input << "\n";

     // Example : 
     cout << "Welcome To BMI Program"
          << "\n";
     cout << "please Enter your height (Meter): "; // get the height in meters
     float Height;
     cin >> Height;
     cout << "Please enter your weight (kg) : "; // get the weight in kg
     float Weight;
     cin >> Weight;
     cout << "your height is : " << Height << "\n"; // print Height
     cout << "your weight is : " << Weight << "\n"; // print Weight
     
     // print the BMI
     cout << "your BMI is : " << (Weight / (Height * Height)) << "\n"; 
     
     return 0;
}