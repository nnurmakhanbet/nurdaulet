#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[2*n+1][n*2+1];

    int i = n , j = n , temp = n , y = 2 , num = 0;

    while(temp--){

      a[i][j] = num++;
      i--;
      int x = y-1;
      while(x--){
        a[i][j--] = num++;
      }
      a[i][j] = num++;
      x = y-1;
      i++;


      while(x--){
        a[i++][j] = num++;
      }
      a[i][j] = num++;
      x = y-1;
      j++;

      while(x--){
        a[i][j++] = num++;
      }
      a[i][j] = num++;
      x = y-1;
      i--;


      while(x--){
        a[i--][j] = num++;
      }

      y+=2;
    }
    a[i][j] = num;
    for(i = 0 ; i < n*2 + 1 ; i++){
      for(j = 0 ; j < n*2 + 1 ; j++)
        cout << setw(3)<< left << a[i][j] << " ";
      cout << endl;
    }
    return 0;
}