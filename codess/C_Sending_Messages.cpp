#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,a,b,cur=0;
        cin>>n>>f>>a>>b;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        for(int i=0; i<v.size(); i++){
            f-=min(b,a*(v[i]-cur));
            cur=v[i];
            if(f<=0){
                cout<<"NO"<<endl;
                break;
            }
        }    
        if(f>0) cout<<"YES"<<endl;
    }
    
    return 0;
}