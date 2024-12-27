#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,cnt=0;
        cin>>n>>m;
        deque<int> a;
        deque<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.pb(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin>>x;
            b.pb(x);
        } 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        for (int i = 0; i < n; i++)
        {
            if(abs(b[0]-a[0]) > abs(b[b.size()-1]-a[a.size()-1])){
                cnt+=abs(b[0]-a[0]);
                a.pop_front();
                b.pop_front();
                // i--;
            }
            else{
                cnt+=abs(b[b.size()-1]-a[a.size()-1]);
                a.pop_back();
                b.pop_back();
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}