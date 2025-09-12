#include<iostream>
#include<string.h>
using namespace std;

class str
{
    char st1[20],st2[10],st3[10];
    int len,i,j;
    public:
    void strlen1()
    {
        cout << "Enter s1:" << endl;
        cin>>st1;
        len=0;
        i=0;
        while(st1[i]!='\0')
        {
            len++;
            i++;
        }
        cout << "Lenght " << len<< endl;
    }
    void strcpy1()
    {
        cout<<"Enter st:"<<endl;
        cin>>st1;
        i=0;
        while(st1[i]!='\0')
        {
            st2[i]=st1[i];
            i++;
        }
        cout<<"Copy st: "<<st2;
    }
    void strcmp1()
    {
        cout<<"ENgter s1:";
        cin>>st1;
        cout<<"Entere s2:";
        cin>>st2;
        i=0;
        j=0;
     while(st1[i]!='\0')
     {
         i++;
     }
     while(st2[j]!='\0')
     {
         j++;
     }
     cout<<i;
     cout<<j;
     if(i>j)
     {
         cout<<"S1 :";
         
     }
     else if(j>i)
     {
         cout<<"s2";
     }
     else {
         cout<<"same:";
     }
     
    }
    void strcat1()
    {
        cout<<"Eneter s1:";
        cin>>st1;
        cout<<"s2";
        cin>>st2;
        i=0; len=0;
        while(st1[i]!='\0')
        {
            i++;
            len++;
        }
        i=0;
        while(st2[i]!='\0')
        {
            st1[len]=st2[i];
            i++;
            len++;
        }
        cout<<st1;
            }
    
};
int main()
{
    str s;
    int no;
    cout<<"enter "<<endl<<"1 for lenght"<<endl<<"2 for copy"<<endl<<"3 for compare"<<endl<<"4 for combine"<<endl<<"Enter no:"<<endl;
    cin>>no;
    switch(no)
    {
    case 1 : s.strlen1();
    break;
    case 2: s.strcpy1();
    break;
    case 3:s.strcmp1();
    break;
    case 4:s.strcat1();
    break;
    default: cout<<"Enter valid no:"<<endl;
    }
    return 0;
}
