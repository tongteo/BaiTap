#include <iostream>
using namespace std;
int doixung( int a[], int n ){
	int l = 0, r = n-1;
	while(l<r){
		if(a[l]!=a[r])
			return 0;
		++l, --r;
	}
	return 1;
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(doixung(a,n)){
		cout<<"YES ";
	}else cout<<"NO";
	cout<<endl;
	return 0;
}
