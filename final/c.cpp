#include <iostream>
using namespace std;
int fox(int *arr, int& n){
    int c = 1, max = n - 1;
  for(int i = n - 2; i >= 0; i--){
    if(arr[i] > arr[max]){
      max = i;
      c++;
    }
  }
  cout << c;
  return 0;
}

int main() {
  int n;
  cin >> n; 
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  fox(arr, n);
}