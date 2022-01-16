#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int res = 1e9+1, index;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < res )
		{
			res = a[i];
			index = i;
		}
	}
	cout << index << endl;
	return 0;
}
