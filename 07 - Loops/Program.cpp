#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // for loop :
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    cout << "\n";

    // for in for
    for (int i = 0; i < 5; i++) // حلقه ی 1
    {
        for (int j = 0; j < 3; j++)
        { // حلقه ی 2
            cout << "i is : " << i << "\nj is : " << j << "\n\n";
        }
        cout << "-------\n";
    }
    cout << "\n";

    // print shapes :

    // shape 1 :
    int h1 = 5; // ارتفاع مثلث
    for (int i = 0; i < h1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    // shape 2 :
    int h2 = 5; // ارتفاع مثلث
    for (int i = 0; i < h2; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < h2 - 1; i++)
    {
        for (int j = 0; j < h2 - (i + 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    // shape 3 :
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * (i + 1)) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * (n - (i + 1))) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    // while loop
    int i = 0;
    while (i > 5)
    {
        cout << i << "\n";
        i++;
    }

    // do while
    do
    {
        cout << "Works!"
             << "\n";
    } while (false);
    cout << "\n";

    // loop in Arrays

    // read all members of array
    int Numbers1[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < size(Numbers1); i++)
    {
        cout << Numbers1[i] << "\n";
    }
    cout << "\n";

    // Counting members
    // define Array :
    int Numbers2[5];
    Numbers2[0] = 10;
    Numbers2[1] = 20;

    // یک متغیر عددی می سازیم که قراره با استفاده ازش تعداد اعضا رو بشماریم.
    int counter = 0;
    // با استفاده از یک حلقه چک می کنیم اگر عضوی خالی نبود یکی به متغیری که بالا ساختیم اضافه کنه :
    for (int i = 0; i < 5; i++)
    {
        if (Numbers2[i] != 0)
        {
            counter++;
        }
    }
    // در نهایت مقدار شمرده شده رو نمایش میدیم :
    cout << counter << "\n";

    // foreach loop
    string Names1[] = {"ali", "amin", "zahra", "maryam"};
    for (string name : Names1)
    {
        cout << name << "\n";
    }
    cout << "\n";

    // delete withe spaces from string :
    cout << "Enter your text : ";
    string input1;
    getline(cin, input1);

    // delete the spaces and save new string to a variable
    string newText;
    for (char c : input1)
    {
        if (c != ' ')
        {
            newText += c; // connect last data to c
        }
    }
    cout << newText;

    // convert string to array
    // define input
    string input2 = "Ali,Hamed,Amin";
    // create an index counter :
    int index1 = 0;
    // Split data by ',' and save to Names Array
    string Names2[3];
    for (char c : input2)
    {
        if (c != ',')
        {
            Names2[index1] += c;
        }
        else
        {
            index1++;
        }
    }
    // Show Array Members
    for (string s : Names2)
    {
        cout << s << "\n";
    }
    cout << "\n";

    // Convert String with unknown size to Array
    // define input
    string input3 = "Ali,Hamed,Amin";
    // Count Array Members :
    int Size = 1;
    for (char c : input3)
    {
        if (c == ',')
        {
            Size++;
        }
    }

    // Split data by ',' and save to Names Array
    string Names[Size];
    // create an index counter :
    int index2 = 0;
    for (char c : input3)
    {
        if (c != ',')
        {
            Names[index2] += c;
        }
        else
        {
            index2++;
        }
    }
    // Show Array Members
    for (string s : Names)
    {
        cout << s << "\n";
    }

    // Work with Vectors :
    vector<int> Numbers3;

    // add member to vector
    Numbers3.push_back(10);
    Numbers3.push_back(20);
    Numbers3.push_back(30);

    // read members from vector
    cout << Numbers3[1];

    // delete member of vector
    Numbers3.erase(Numbers3.begin() + 2);

    return 0;
}