#include <iostream>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sole;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			++sole;
		}
	}
	cout<<sole<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
