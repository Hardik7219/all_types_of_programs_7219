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
    int max, min;
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
}