#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
     cin>>a[i];      
    }
    for (int i = 0; i < n; i++)
    {
        if(prime(a[i])) cout<<a[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}