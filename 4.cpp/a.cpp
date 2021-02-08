#include <iostream>
using namespace std;
 
int main()
{
    char str[255];
    short int c = 0;
    cout << "Input string - ";
    cin.getline(str, 255);
    for (int i = 0; str[i] != 0; i++)
        if (str[i] > 47 && str[i] < 58)
            c++;
    cout << "Count of numbers = " << c << endl;
    system("pause");
    return 0;
}