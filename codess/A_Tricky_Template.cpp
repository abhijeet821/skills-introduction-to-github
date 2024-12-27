#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0,cnt1=0;
        cin>>n;
        string a,b,c,t;
        cin>>a>>b>>c;
        if(a==c || b==c) cout<<"NO"<<endl;
        else{
            for (int i = 0; i < n; i++)
            {
                if(a[i]==b[i] && a[i]!=c[i]) cnt++;
                if(a[i]!=b[i] && a[i]!=c[i] && b[i]!=c[i]) cnt++;
            }
            if(cnt>0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }    
    }

    return 0;
}