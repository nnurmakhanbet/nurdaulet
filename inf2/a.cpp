#include<iostream>
#define MIN -1
using namespace std;
int main(){
	int a, max=MIN,second_max=MIN;
	cin >> a;
    int arr[a];
	
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}

	for(int i=0;i<a;i++){
		if(arr[i]>max){
			second_max=max;
			max=arr[i];
		}
	}
	cout<<"Second Max:"<<second_max;
	return 0;
}