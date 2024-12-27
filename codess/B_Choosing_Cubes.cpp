#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k,cnt=0,z=0;
        cin>>n>>f>>k;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v[i]=x;
        }
        int a=v[f-1];
        for (int i = 0; i < n; i++)
        {
            if(v[i]==a) cnt++;
            else continue;
        }
        sort(v,v+n);
        for (int i = 0; i < n-k; i++)
        {
            if(v[i]==a) z++;

        }
        if(z==0) cout<<"NO"<<endl;
        else if(z>=1 && cnt>1) cout<<"MAYBE"<<endl;
        else cout<<"YES"<<endl;
        
        
                
    }

    return 0;
}