#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n];
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}