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
        deque<int> a;
        deque<int> d;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.pb(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            d.pb(x);
        }
        for (int i = 0; i < n; i++)
        {
            int s=0; 
            if(i==0){
                s=a[i+1];
                if(s>d[i]) cnt++;
            }
            else if(i)
        }
           
    }

    return 0;
}