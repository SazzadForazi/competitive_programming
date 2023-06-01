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
    void printDetails()
    {
        cout << name << " Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "height:" << height << endl;
        cout << "age:" << age << endl;
    }
};
int main()
{
    // Accessing dynamic object
    Person *person1 = new Person("Alex", 5.11, 45);
    // cout << (*person1).name << endl;
    person1->printDetails();

    return 0;
}
