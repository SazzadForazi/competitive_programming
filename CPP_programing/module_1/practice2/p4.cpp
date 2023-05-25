#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    long long int d, result = 0;
    char c, eq;
    cin >> a >> c >> b >> eq >> d;
    switch (c)
    {
    case '+':
        result = a + b;
        if (result == d)
        {
            cout << "Yes" << endl;
        }
        else if (result >= 0)
        {
            cout << result << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        break;
    case '-':
        result = a - b;
        if (result == d)
        {
            cout << "Yes" << endl;
        }
        else if (result <= 0)
        {
            cout << result << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        break;
    case '*':
        result = a * b;

        if (result == d)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }

        break;
        // default:
        //     cout << "Yes" << endl;
    }

    return 0;
}