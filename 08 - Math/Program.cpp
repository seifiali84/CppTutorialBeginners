#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // absolute of number :
    cout << abs(-2) << "\n"; // print 2
    cout << abs(10) << "\n"; // print 10

    // power of number :
    cout << pow(2, 3) << "\n"; // 2 ^ 3 = 8

    // root of number :
    cout << pow(4, 0.5) << "\n";       // رادیکال 4
    cout << pow(4.0, (1 / 3)) << "\n"; // ریشه ی سوم 4

    // min and max :
    cout << min(10, 20) << "\n"; // 10
    cout << max(10, 20) << "\n"; // 20

    // trigonometry :
    auto Pi = 3.14159265358979323846; // define Pi number
    // sinus
    cout << sin(0) << "\n"; // 0
    // cosine
    cout << cos(Pi) << "\n"; // -1
    // tangent
    cout << tan(0) << "\n"; // 0

    // Inverse trigonometric
    // arc sinus
    cout << asin(0) << "\n"; // 0
    // arc cosine
    cout << acos(1) << "\n"; // 0
    // arc tangent
    cout << atan(0) << "\n"; // 0

    // Hyperbolics
    // sinus hyperbolic
    cout << sinh(0) << "\n"; // 0
    // cosine hyperbolic
    cout << cosh(0) << "\n"; // 1
    // tangent hyperbolic
    cout << tanh(0) << "\n"; // 0

    return 0;
}