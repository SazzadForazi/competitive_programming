#include <bits/stdc++.h>
using namespace std;
void fun()
{
    // static variable
    static int count = 5;
    cout << count << " ";

    // value is updated and
    // will be carried to next
    // function calls
    count++;
}

int main()
{
    for (int i = 0; i < 5; i++)
        fun();
    return 0;
}
// output: 5 6 7 8 9