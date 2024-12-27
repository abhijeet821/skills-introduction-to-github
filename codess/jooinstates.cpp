#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int v[n];
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int sum=0,cnt=0;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
            if(sum>=m){
                cnt++;
                sum=0;
            }

        }
        cout<<cnt<<endl;
    }

    return 0;
}