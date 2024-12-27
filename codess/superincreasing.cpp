#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int a[n],sum=1;
        a[0]=1;
        for (int i = 1; i < n; i++)
        {
            a[i]=sum+1;
            sum+=a[i];
        }        
        if(x>=a[k-1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}