/*Write a program to print 
factorial of N. (Using class fact).*/
#include<iostream>
using namespace std;// aa vastu khali amm lakhvu pade turbo c++ ma nay
class fib
{
    int n,f;
    public:
    void print()
    {
         f=1;
         
         cout<<"Enter no:";
         cin>>n;
         while(n>0)
         {
         
             f=f*n;
             n--;
         }    
             cout<<"fact="<<f;
                 }
};
int main()
{
    fib h;
    h.print();
    return 0;
}
    