#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0;
        cin>>n;
        string s,f;
        cin>>s>>f;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1' && f[i]=='1') continue;
            else{
                if(s[i]=='1') a++;
                if(f[i]=='1') b++;
            }
        }
        cout<<max(a,b)<<endl;
    }

    return 0;
}