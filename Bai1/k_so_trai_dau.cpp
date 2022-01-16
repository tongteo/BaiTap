#include <iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i==0 && a[0]*a[1]<0){
			cout<<a[0]<<" ";
		}else if(i==n-1 && a[n-1]*a[n-2]<0){
			cout<<a[n-1]<<" ";
		}else if(a[i]*a[i-1]<0 || a[i]*a[i+1]<0){
			cout<<a[i]<<" ";
		}
	}
	cout <<endl;

	return 0;
}
