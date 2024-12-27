#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < 4; i++){
                char x;
                cin>>x;
                if(x =='#'){
                    v.pb(i+1);
                }
            }            
        }     
        reverse(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    