#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    char type[10];
    int seat;
    char helper;

    Vehicle(char *v_type, int seat_num, char c)
    {
        strcpy(type, v_type);
        seat = seat_num;
        helper = c;
    }

    void printDetails()
    {
        cout << type << " Details" << endl;
        cout << "Vahicle Name: " << type << endl;
        cout << "Total Seat:" << seat << endl;
        cout << "Is Helper required:" << helper << endl;
    }

}; // framework,chach,model;
int main()
{
    // object  create korbo
    // stack e obj tori korle setar behavor gula dor operator diye access kora jy
    Vehicle car("car", 4, 'N');
    Vehicle mot("Motocycle", 2, 'N');
    Vehicle bus("bus", 14, 'N');
    // car.printDetails();
    mot.printDetails();

    // dynamic vabe object make korbo
    // type *variable name = kake ref korbo seta dibo
    Vehicle *car2 = new Vehicle("car2", 4, 'N');
    // cout << car2->helper << endl;
    cout << (*car2).helper << endl;
    cout << (*car2).type << endl;
    delete car2;
    cout << "Afert deleting" << endl;
    cout << car2->type << endl;
    return 0;
}