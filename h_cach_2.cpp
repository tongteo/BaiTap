#include <iostream>
using namespace std;
int check(int n)
{
	while(n)
	{
		int r = n%10;
		if(r%2==0) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int n; cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int so_le = 0;
	for(int i=0;i<n;i++)
	{
		if(check(a[i
		]))
		{
			b[so_le] = a[i];
			++so_le;
		}
	}
	cout<<so_le<<endl;
	for(int i=0;i<so_le;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	return 0;
}
