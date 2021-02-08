#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n],b[n],c[n];
  for(int i=0;i<n;i++)  {
    cin>>a[i];
  }
  int o=0;
  for(int i=0;i<n;i++)  {
    int count=0,check=0;
    for(int k=0;k<i;k++){
      if(a[i]==a[k] && i!=0){
        check++;
      }
    }
    if(check==0){
          for(int j=i;j<n;j++)  {
      if(a[i]==a[j]){
          count++;
      }
    }
    b[o]=count;
    c[o]=a[i];
    o++;
    }
  }
  int max=b[0];
  for(int i=0;i<o;i++){
    if(b[i]>=max){
        max=b[i];
        }
  }
    for(int i=0;i<o;i++){
    if(b[i]==max){
        cout<<c[i]<<"  ";
        }
  }
}