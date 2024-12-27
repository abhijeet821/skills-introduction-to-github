#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> v;
        for (int i = 0; i < 4; i++)
        {
            int x,y;
            cin>>x>>y;
            v.pb({x,y});
        }
        sort(v.begin(),v.end());
        int x = v[1].second-v[0].second;
        cout<<x*x<<endl;
    }

    return 0;
}