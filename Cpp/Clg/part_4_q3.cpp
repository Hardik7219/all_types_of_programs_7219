/*Build a class person, which contains person
name, age and city as data members and
member functions
getdata( ) and
printdata ( ).
Write a C++ program to read and display a person
data.*/
#include <iostream>
using namespace std;
class fib
{
    int age;
    char name[10], city[12];

public:
    void getdata()
    {

        cout << "Enter age:";
        cin >> age;
        cout << "Enter name:";
        cin >> name;
        cout << "Enter city:";
        cin >> city;
    }
    void printdata()
    {
        cout << "AGE:" << age << "\n";
        cout << "NAME:" << name << "\n";
        cout << "CITY:" << city << "\n";
    }
};
int main()
{
    fib h;
    h.getdata();
    h.printdata();
    return 0;
}
