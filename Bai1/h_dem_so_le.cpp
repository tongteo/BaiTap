#include <iostream>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n;  i++)
	{
		cin>>a[i];
	}
	int so_le = 0;
	for(int i=0; i<n;  i++)
	{
		if(a[i]%2!=0)
		{
			++so_le;
		}
	}cout<<so_le<<endl;
	for(int i=0; i<n;  i++)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
