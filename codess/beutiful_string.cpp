#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

void goodstring(vector<char> &v){
    int cnt=0,mx=0;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]==v[i+1]) cnt++;
        else cnt=0;
        mx=max(mx,cnt);
    }
    cout<<mx+1<<" ";
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,q,mx=1,cnt=1;
        cin>>n>>q;
        string s;
        vector<char> v;
        cin>>s;
        for (int i = 0; i < s.size()-1; i++)
        {
            v.pb(s[i]);
            if(s[i]==s[i+1]){
                cnt++;
                mx=max(mx,cnt);
            }
            else cnt=1;
        }
        // goodstring(v);
        cout<<mx<<" ";
        for (int i = n-1; i < n+q-1; i++)
        {
            char c;
            cin>>c;
            v.pb(c);
            s+=c;
            // cout<<v[i+1];
            // goodstring(v);
            if(s[i]==s[i+1]){
                cnt++;
                mx=max(mx,cnt);
            }
            else cnt=1;
            cout<<mx<<" ";
        }
        cout<<endl;
    }

    return 0;
}