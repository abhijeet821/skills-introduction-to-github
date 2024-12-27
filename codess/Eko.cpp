#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int n,m,hi=0,lo=0,ans=0;
    cin>>n>>m;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
        hi=max(hi,x);
    }
    // cout<<hi;
    int mid=(lo+hi)/2;
    while(lo<=hi){
        mid=(lo+hi)/2;
        int sum=0;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]<mid) continue;
            sum=(v[i]-mid)+sum;
        }
        if(sum>=m) {
            lo=mid+1;
            ans=mid;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}