#include <iostream>
 
#include <ctype.h>
 
using namespace std;
 
 
 
int NumOfDigits(char* str)
 
{
 
    int count = 0;
 
    while(*str !=0)
 
    {
 
        if(isdigit(*str++))
 
            count++;
 
    }
 
    return count;
 
}
 
 
 
int main()
 
{
 
    char numbers[] = "asdd488";
    int a;
    cin >> a;
 
    
 
    int res = NumOfDigits(numbers);
    if (res >= a)
    {
      cout << "yes" << endl;
    }
    else
    {
      cout << "no" << endl;
    }
    
 
    return 0;
 
}