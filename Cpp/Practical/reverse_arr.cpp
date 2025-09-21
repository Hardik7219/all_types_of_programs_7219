#include <iostream>
using namespace std;

int main()
{
    int arr[5], n;
    cout << "Enter no:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arra:";
        cin >> arr[i];
    }
    int j = n, arrg[5];
    for (int i = 0; i < n; i++)
    {
        j--;
        arrg[i] = arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrg[i];
    }
}