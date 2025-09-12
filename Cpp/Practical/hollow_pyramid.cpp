#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) 
    {
        for(int k=0; k<=n-i; k++) 
        {
        std::cout<<" ";
        }
        
        for(int p=0; p<=i; p++)
        {
            if( p==n || p==0 || p==i || i==0 || i==n)
            {
            std::cout<<" *";
            }
            else
            {
            std::cout<<"  ";
            }
        }
        

        std::cout << "\n";
    }
     return 0;
}