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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        if(v.size()<3) cout<<"-1"<<endl;
        else{
            for(int i=0; i<n; i++){
                if(v[i]==1) cout<<"3"<<" ";
                else if(v[i]==3) cout<<"1"<<" ";
                else cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}