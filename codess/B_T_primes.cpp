#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

bool isprime(int x){
    if(x==1 || x==0) return false;
    if(x==2) return true;
    for (int i = 2; i*i <= x; i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
        int x=sqrt(a[i]);
        if(x*x==a[i] && isprime(x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}