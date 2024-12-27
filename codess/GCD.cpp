#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=n/k;
        int ans=x;
        while(k--){
            cout<<ans<<" ";
            ans+=x;
        }
        cout<<endl;   
    }

    return 0;
}