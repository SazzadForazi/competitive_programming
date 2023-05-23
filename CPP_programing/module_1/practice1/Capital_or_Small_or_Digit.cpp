#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cin >> n;
    if (n >= 48 && n <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (n >= 65 && n <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (n >= 97 && n <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}