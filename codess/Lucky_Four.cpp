#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    // int n;
    // cin>>n;
    // vector<vector<char>> v(n);
    // for (int i = 0; i < n; i++){
    //     char x;
    //     cin>>x;
    //     v[i].pb(x);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        m[x]=y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
    for (int i = 0; i < n; i++) cout<<v[i].first<<" "<<v[i].second<<endl;
    cout<<endl;
    
    



    return 0;
}