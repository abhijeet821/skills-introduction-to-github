#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        int k=2,d;
        
        while(k<1e18)
        {
            unordered_map<int,int> m;
            for (int i = 0; i < n; i++)
            {
                d=v[i]%k;
                m[d]++;
            }
            if(m.size()==2){
                cout<<k<<endl;
                break;
            }
            else k*=2;
        }                
    }

    return 0;
}