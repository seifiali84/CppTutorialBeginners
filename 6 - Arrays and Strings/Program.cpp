#include <iostream>
#include <string>

using namespace std;
int main()
{

    int Numbers[5];
    Numbers[0] = 10;
    Numbers[1] = 20;
    // cout << Numbers.front() << "\n";
    int Numbers1[2];
    // cout << size(Numbers1) << "\n";

    int Numbers2[] = {1, 2, 3};
    // string input;
    // cin >> input;
    // cout << input << "\n";

    // string input;
    // getline(cin, input);
    // cout << input << "\n";

    // string Name;
    // getline(cin, Name);
    // Name[0] = 'P';
    // cout << size(Name) << "\n";

    // string Name;
    // getline(cin , Name); // ورودی را از کاربر دریافت می کنیم.
    // char First = Name[0]; // مقدار اولین حرف از اسم کاربر رو داخل یک متغیر نگه میداریم تا بعد از جابه جا کردن این مقدار با حرف آخر فامیل این مقدار رو از دست ندیم.
    // int Length = size(Name); // طول این متن رو با استفاده از دستور سایز میگیریم و داخل این متغیر ذخیره می کنیم.
    // Name[0] = Name[Length - 1]; // طول متن رو منهای یک می کنیم تا ایندکس آخرین حرف از ورودی کاربر رو به دست بیاریم. (آخرین ایندکس همیشه از تعداد اعضا یکی کمتره.)
    // Name[Length - 1] = First; // حالا حرف آخر ورودی کاربر رو با مقدار حرف اول ورودیش که قبلا ذخیره کرده بودیم برابر میزاریم.

    // cout << Name << "\n"; // در نهایت متن نهایی رو به عنوان خروجی چاپ می کنیم.

    int Table[3][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8}, 
                       {9, 10, 11, 12}};
    int Cube[3][3][3];
    int Test[1][1][1][1][1][1][1][1][1][1][1];
    return 0;
}