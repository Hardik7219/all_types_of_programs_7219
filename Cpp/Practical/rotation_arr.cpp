#include <iostream>
using namespace std;

int main() 
{
    int arr[5],n;
    cout<<"Enter no:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter arra:";
        cin>>arr[i];
    }
    int ar2[10],temp=0;;
    
    for(int i=0; i<n; i++)
    {
    cout<<"Enter second arr:";
    cin>>ar2[i];
              
    }
    for(int i=0; i<n; i++) 
    {
    if(ar2[i]==arr[n-i-1]) 
    {
        temp++;
    }
    }
    if(temp==n)
    {
   cout<<"yes:";
    }
}