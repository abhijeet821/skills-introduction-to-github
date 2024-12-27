#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int factorial(int n){
    if(n==1) return 1;
    int s = n * factorial(n-1);
}

int32_t main(){
    int n;
    cin>>n;
    int k = factorial(n);
    cout<<k<<endl;
    return 0;
}