#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if (a >= 48 && a <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (a >= 65 && a <= 96)
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }
    return 0;
}