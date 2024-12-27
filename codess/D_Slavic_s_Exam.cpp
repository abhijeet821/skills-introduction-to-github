#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        int j=0,cnt=0;
        cin>>s>>t;
        for (int i = 0; i < s.size() && j<t.size(); i++)
        {
            if(s[i]==t[j]){
                j++;
                cnt++;
            }
            else if(s[i]=='?'){
                s[i]=t[j];
                j++;
                cnt++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='?') s[i]='a';
        }
        if(cnt==t.size()) cout<<"YES"<<endl<<s<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}