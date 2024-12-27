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
        int b[n];
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            int x=b[i];
            m[x]++;
        }
        int s=0;
        for(auto x:m){
            int a=x.second;
            if(a>1){
                s+=((a*(a-1))/2)*cnt;
                s+=(a*(a-1)*(a-2))/6;
            }
            cnt+=a;
        }
        cout<<s<<endl;
               
    }

    return 0;
}