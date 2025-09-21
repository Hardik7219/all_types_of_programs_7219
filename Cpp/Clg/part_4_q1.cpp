/*Write a program to generate the following series
(using class fibo) : 1 1 2 3 5 8 …..*/
#include <iostream>
using namespace std;
class fib
{
    int n, i, a, b, c;

public:
    void print()
    {
        a = -1;
        b = 1;
        cout << "Enter no:";
        cin >> n;
        for (i = 0; i < n; i++)
        {

            c = a + b;
            cout << "\t" << c;
            a = b;
            b = c;
        }
    }
};
int main()
{
    fib h;
    h.print();
    return 0;
}
