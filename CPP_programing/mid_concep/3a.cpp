#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
    int number;     // 4 byte
    double decimal; // 8 byte
    char character; // 1 byte
};

int main()
{
    cout << "Size of MyClass object: " << sizeof(MyClass) << " bytes" << endl;

    return 0;
}
