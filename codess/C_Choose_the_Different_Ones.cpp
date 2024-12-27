#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,cnt=0;
        cin>>n>>m>>k;
        set<int> a,b,c;
        vector<int> a1,b1,c1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.insert(x);
            c.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin>>x;
            b.insert(x);
            c.insert(x);
        }
        for(auto x:a) a1.pb(x);
        for(auto x:b) b1.pb(x);
        for(auto x:c) c1.pb(x);
        if(a1.size()>=k/2 && b1.size()>=k/2){
            if(a1[(k/2)-1]>k || b1[(k/2)-1]>k) cout<<"NO"<<endl;
            else{
                if(c1.size()<k) cout<<"NO"<<endl;
                else{
                    if(c1[k-1]==k) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
            }
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}