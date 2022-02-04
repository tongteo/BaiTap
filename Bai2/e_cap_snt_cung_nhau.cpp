#include <iostream>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main(){
	int n; std::cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		std::cin >> a[i];
	}
	long long cnt = 0;
	for( int i =0; i<n;i++){
		for(int j =i+1; j<n; j++){
			if(gcd(a[i], a[j])==1) ++cnt;
		}
	}
	std::cout << cnt << std::endl;
	return 0;
}
