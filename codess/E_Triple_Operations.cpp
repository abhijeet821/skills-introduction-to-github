#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector <int> v;
        int n=b-a+1;
        for (int i = 0; i < n; i++)
        {
            v.pb(a);
            a++;
        }
        int cnt=0;
        while(v[0]>0){
            v[0]/=3;
            v[1]*=3;
            cnt++;
        }
        for (int i = 1; i < v.size(); i++)
        {
            float x=log3(v[i]);
            cnt+=x;
        }
        cout<<cnt<<endl;    
    }
    return 0;
}