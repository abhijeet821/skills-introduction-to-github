#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        string s,p;
        cin>>s;
        p=s;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]>s[i+1] && cnt<1){
                s.erase(s.begin()+i);
                cnt++;
                break;
            }
            // p.pb(s[i]);
        }
        if(cnt==0) s.erase(s.begin()+n-1);
        cout<<s<<endl;
    }

    return 0;
}