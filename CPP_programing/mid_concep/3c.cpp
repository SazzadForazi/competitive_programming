#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[10];
    float height;
    int age;

    Person(char *p_name, float p_height, int p_age)
    {
        strcpy(name, p_name);
        height = p_height;
        age = p_age;
    }
};
int main()
{
    // Accessing dynamic object
    Person *person1 = new Person("Alex", 5.11, 45);
    Person *person2 = new Person("hels", 6.00, 55);
    float a = (*person1).age;
    float b = (*person2).age;
    if (a > b)
    {
        cout << (*person1).name << endl;
    }
    else
    {
        cout << (*person2).name << endl;
    }

    return 0;
}
