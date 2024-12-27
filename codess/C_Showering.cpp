#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        bool poss=false;
        cin>>n>>s>>m;
        vector <pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            v.pb(make_pair(x,y));
        }
        for (int i = 0; i < n+1; i++)
        {
            if(i==0){
                if(v[i].first-0>=s){
                    poss=true;
                    break;
                }
            }
            else if(i==n){
                if(m-v[i-1].second>=s){
                    poss=true;
                    break;
                }
            }
            else{
                if(v[i].first-v[i-1].second>=s){
                    poss=true;
                    break;
                }
            }
        }
        if(poss==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}