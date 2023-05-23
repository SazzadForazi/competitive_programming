#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int max_value = a[0];
    int min_value = a[0];
    for (int i = 0; i < 3; i++)
    {
        max_value = max(max_value, a[i]);
        min_value = min(min_value, a[i]);
    }

    cout << min_value << " " << max_value << endl;

    return 0;
}