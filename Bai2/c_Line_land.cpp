#include <iostream>
using namespace std;
int mini(int a, int b){
	return a<b?a:b;
}
int maxi(int a, int b){
	return a>b?a:b;
}
int main(){
	cout<<" hello moi nguoi";
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if (i==0) cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;//phan tu dau tien trong mang
		else if(i==n-1) cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;//phan tu cuoi cung trong mang
		else cout<<mini(a[i]-a[i-1],a[i+1]-a[i])<<" "<<maxi(a[i]-a[0],a[n-1]-a[i])<<endl;//phan tu bat ky trong mang
	}
	return 0;
}
