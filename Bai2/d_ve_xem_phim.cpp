#include <iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int excess_cash=0;
	int total_cash=0;
	for(int i=0;i<n;i++){
		total_cash += a[i];
		excess_cash = a[i]-25;
		if(total_cash - excess_cash < 0){
			cout<<"No"<<endl;
		}
		else {
			cout << "Yes" << endl;
		}
	}
	return 0;
}
