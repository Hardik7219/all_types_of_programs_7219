#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) 
    {
        
        
        for(int p=0; p<=n; p++)
        {
            if( p==n-i || p==i)
            {
            std::cout<<"*";
            }
            else
            {
            std::cout<<" ";
            }
        }
        

        std::cout << "\n";
    }
     return 0;
}