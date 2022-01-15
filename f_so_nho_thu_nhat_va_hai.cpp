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
	int min1 = 1e9+1, min2 = 1e9+1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min1)
		{
			min2 = min1;
			min1 = a[i];
		}
		else if(a[i] < min2)
		{
			min2 = a[i];
		}
	}
	cout << min1 << " " << min2 << endl;
	return 0;
}
