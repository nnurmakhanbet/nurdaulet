#include<iostream>
using namespace std;
int right( int a[], int N){ 
     int temp=a[N-1];
     for (int i=N-1; i>0;i--) a[i]=a[i-1];
     a[0]=temp;
     
     }
int main(){
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];

    }
    cout << right(arr, a);
    
}