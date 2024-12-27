#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int n,m;
    cin>>n>>m;
    deque <int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int mx=0,y;
        for (int i = 0; i < n; i++) 
        {
            y=(v[i]+x)%m;
            mx=max(mx,y);
        }
        cout<<mx<<endl;
    }

    return 0;
}