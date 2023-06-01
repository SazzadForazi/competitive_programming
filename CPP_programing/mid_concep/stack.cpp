#include <bits/stdc++.h>
using namespace std;
fun2()
{
    int n = 25;
    cout << "I am from fun2\n";
}
void fun1()
{
    int n = 20;
    fun2();
    cout << "I am from fun1\n";
}
int main()
{
    int n = 15;
    fun1();
    cout << "I am from main\n";

    return 0;
}