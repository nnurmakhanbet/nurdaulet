#include<iostream> 
using namespace std; 
int fox(int arr1[], int arr2[], int a,  int b, int arr3[]) 
{ 
    int x = 0, y = 0, z = 0; 
    while (x < a && y < b) 
    { 
        if (arr1[x] < arr2[y]) 
            arr3[z++] = arr1[x++]; 
        else
            arr3[z++] = arr2[y++]; 
    } 
    while (x < a) 
        arr3[z++] = arr1[x++]; 
    while (y < b) 
        arr3[z++] = arr2[y++]; 
} 

int main() 
{ 
    int a, b;
    cin >> a;
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    cin >> b;
    int arr2[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }
    
  
    int arr3[a+b]; 
    fox(arr1, arr2, a, b, arr3); 
    for (int i = 0; i < a + b; i++) 
        cout << arr3[i] << " "; 
  
    return 0; 
} 
