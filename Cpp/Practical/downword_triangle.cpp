#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) 
    {
        
        for(int t=0; t<n-i; t++)
        {
        std::cout<<" *";
        }
        

        std::cout << "\n";
    }
    
       return 0;
}