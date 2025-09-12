/*Define a class student, which accept student number, name and marks of three subjects. 
Calculate total and percentage using different member functions. (For single student only)
Output: 
Student Number : …… 
Student Name : …… 
Marks 1 : ….. 
Marks 2 : …..
Marks 3 : ….. 
Total : …. 
Percentage : ….*/
#include<iostream>
using namespace std;// aa vastu khali amm lakhvu pade turbo c++ ma nay
class student
{
    int no,m1,m2,m3,total;
    float per;
    char name[10];
    public:
    void getdata()
    {
                 
         cout<<"Enter name:";
         cin>>name;
         cout<<"Enter no:";
         cin>>no;
         cout<<"Enter m1:";
         cin>>m1;
         cout<<"Enter m2:";
         cin>>m2;
         cout<<"Enter m3:";
         cin>>m3;           
         total=m1+m2+m3;
         per=total/3;      
    }
    void printdata()
    {
        cout<<"Student Number:"<<no<<"\n";
        cout<<"NAME:"<<name<<"\n";
        cout<<"Makrs 1:"<<m1<<"\n";
        cout<<"Makrs 2:"<<m2<<"\n";
        cout<<"Makrs 3:"<<m3<<"\n";
        cout<<"Total:"<<total<<"\n";
        cout<<"Percentage:"<<per;
    }
};
int main()
{
    student h;
    h.getdata();
    h.printdata();
    return 0;
}
    