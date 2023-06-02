#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ar;
        cin >> ar;

        if (ar[0] - '0' + ar[1] - '0' + ar[2] - '0' == ar[3] - '0' + ar[4] - '0' + ar[5] - '0')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
