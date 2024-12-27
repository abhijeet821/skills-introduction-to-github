#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,mx=INT_MAX,mn=0;
        cin>>n;
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            int a,x;
            cin>>a>>x;
            v.pb({a,x});
            if(a==1) mn=max(mn,x);
            else if(a==2) mx=min(mx,x);
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(auto x: v){
            if(x.first==3){
                if(x.second>=mn && x.second<=mx) cnt++;
            }
        }
        if(mx<mn) cout<<0<<endl;
        else cout<<mx-mn+1-cnt<<endl;
    }

    return 0;
}