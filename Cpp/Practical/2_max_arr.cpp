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
    int max, max2;
    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int I = 0; I < n; I++)
    {
        if (max == arr[I])
        {
            arr[I] = 0;
        }
    }
    max2 = arr[0];
    for (int I = 0; I < n; I++)
    {
        if (max2 < arr[I])
        {
            max2 = arr[I];
        }
        cout << arr[I] << endl;
    }
    cout << "2 largest :" << max2 << endl;
}