#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 15;
    int a[5] = {1, 2, 3, 4, 5}; // stack e create hoice
    int *arr = new int[5]{10, 12, 14, 15, 16};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    delete[] arr; // heap er modde value gulu delete hoice
    arr = NULL;
    cout << "After deleting\n";
    cout << arr << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}