#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream inputFile("/storage/emulated/0/Documents/C/Arrraysumfus.txt");
    string a;
    while (getline(inputFile, a))
    {
        cout << a << "\n";
    }
    inputFile.close();
    return 0;
}