#include <iostream>
#include <string>

using namespace std;

// start createing a mini Rock Paper Scissor game (سنگ کاغذ قیچی)
int main()
{
    // intro :
    cout << "Welcome to rock paper scissor game!\n";
    cout << "in this game use R(rock) P(paper) S(scissor) to make your choice.\n";

    // start the game

    // get the player 1 choice
    cout << "player 1 Choice : ";
    char P1; // player one choice
    cin >> P1;
    cout << "player one Choice is : " << P1 << "\n";

    // get the player 2 choice
    cout << "player 2 Choice : ";
    char P2; // player 2 Choice
    cin >> P2;
    cout << "Player 2 Choice is : " << P2 << "\n";

    // check the inputs :
    if (P1 == P2)
    {
        cout << "equaled.\n"; // مساوی شد
    }
    else if (((P1 == 'R') && (P2 == 'S')) || // اگر پلیر 1 سنگ آورد و پلیر 2 قیچی
             ((P1 == 'S') && (P2 == 'P')) || // یا اگر پلیر 1 قیچی آورد و پلیر 2 کاغذ
             ((P1 == 'P') && (P2 == 'R'))) // یا اگر پلیر 1 کاغذ آورد و پلیر 2 سنگ
    {
        // P1 Wins
        cout << "Player 1 Wins\n";
    }
    else if (((P2 == 'R') && (P1 == 'S')) || // اگر پلیر 2 سنگ آورد و پلیر 1 قیچی
             ((P2 == 'S') && (P1 == 'P')) || // یا اگر پلیر 2 قیچی آورد و پلیر 1 کاغذ
             ((P2 == 'P') && (P1 == 'R'))) // یا اگر پلیر 2 کاغذ آورد و پلیر یک سنگ
    {
        // P2 Wins
        cout << "Player 2 Wins\n";
    }
    else
    {
        // ما همه ی حالت هارو بررسی کردیم و اگر ورودی کاربر داخل هیچکدوم از حالت های بالا نبود یعنی ورودی مجاز وارد نکرده.
        // اگر کاربر ورودی شامل چند حرف وارد کنه برنامه کرش می کنه چون ورودی فقط میتونه یک کارکتر باشه.
        cout << "your input is not correct.\n";
    }

    return 0;
}