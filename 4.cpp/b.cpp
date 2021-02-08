#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int fox(char *s, char *t){
    if (strstr ( s, t) != NULL)
    {
        return 1;
    }
}

int main(){
    char sourceStr[40], targetStr[40];

    printf("Enter a source string: ");
    gets(sourceStr);
    printf("Enter the target string: ");
    gets(targetStr);
    if (fox(sourceStr, targetStr)==1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    

    printf("\n",fox(sourceStr, targetStr));
    return 0;
}
