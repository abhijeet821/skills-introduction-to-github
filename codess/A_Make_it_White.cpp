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
        string s;
        cin>>s;
        int l,r;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B'){
                l=i; 
                break;
            } 
        }
        for (int i = n-1; i >=0; i--)
        {
            if(s[i]=='B') {
                r=i;
                break;
            }

        }
        cout<<(r-l+1)<<endl;
    }

    return 0;
}