#include <bits/stdc++.h> 
using namespace std;
int main()
{   
  int a;
  cin >> a;
  int arr[a][a];
  for(int i = 0; i < a; i++)
  {
      for(int j = 0; j < a; j++)
      {
          cin >> arr[i][j];
      }
  }
  for (int i = 0; i < a / 2; i++) 
  { 
    for (int j = i; j < a - i - 1; j++) 
    { 
            int x = arr[i][j]; 
            arr[i][j] = arr[a-1-j][i]; 
            arr[a-1-j][i] = arr[a-1-i][a-1-j]; 
            arr[a-1-i][a-1-j] = arr[j][a-1-i]; 
            arr[j][a-1-i] = x; 
    } 
  }
    

  for(int i = 0; i < a; i++)
  {
      for(int j = 0; j < a; j++)
      {
          cout << arr[i][j] << " ";
      }
      cout << endl;
  }
}