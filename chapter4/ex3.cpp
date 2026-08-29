
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;
    int c6 = 0;
    // ANSI color codes
    string red     = "\033[31m";
    string green   = "\033[32m";
    string yellow  = "\033[33m";
    string blue    = "\033[34m";
    string magenta = "\033[35m";
    string cyan    = "\033[36m";
    string reset   = "\033[0m";

    for (size_t i = 0; i < 10; i++)
    {
        int rand_no = (rand() % 6) + 1;

        switch (rand_no)
        {
        case 1:
            cout << red
                 << "You have won a Chess board."
                 << reset << endl;
                 c1 ++;
            break;

        case 2:
            cout << green
                 << "You have won a Carrom board."
                 << reset << endl;
                 c2++;
            break;

        case 3:
            cout << yellow
                 << "You have won a LUDO game."
                 << reset << endl;
                 c3++;
            break;

        case 4:
            cout << blue
                 << "You have won a Bat."
                 << reset << endl;
                 c4++;
            break;

        case 5:
            cout << magenta
                 << "You have won a Badminton."
                 << reset << endl;
                 c5++;
            break;

        case 6:
            cout << cyan
                 << "You have won a pack of Cards."
                 << reset << endl;
                 c6++;
            break;

        default:
            cout << "Wrong entry!" << endl;
            break;
        }
    }
    cout <<"C1 = "<< c1<< " C2 = "<< c2<< " C3 = "<< c3<< " C4 = "<< c4<< " C5 = "<< c5<< " C6 = "<< c6;

    return 0;
}

