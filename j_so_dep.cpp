#include <iostream>
using namespace std;
int check(int n)
{
	int c1=0,c9=0;
	while(n)
	{
		int r=n%10;
		if(r==1) c1=1;
		if(r==9) c9=1;
		n/=10;
	}
	return c1&&c9;
}
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ok=0;
	for(int i=0; i<n;i++)
	{
		if(check(a[i]))
		{
			cout<<a[i]<<" ";
			ok=1;
		}
	}
	if(!ok) cout << "-1";
	cout<<endl;
	return 0;
}
