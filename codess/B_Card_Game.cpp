#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a[2],b[2];
        int cnt=0,sum=0;
        cin>>a[0]>>a[1]>>b[0]>>b[1];
        if(a[0]>b[0] && a[1]>=b[1]) sum++;
        if(a[0]>b[1] && a[1]>=b[0]) sum++;
        if(a[1]>b[0] && a[0]>=b[1]) sum++;
        if(a[1]>b[1] && a[0]>=b[0]) sum++;
        if(a[0]==b[0] && a[1]>b[1]) sum++;
        if(a[0]==b[1] && a[1]>b[0]) sum++;
        if(a[1]==b[0] && a[0]>b[1]) sum++;
        if(a[1]==b[1] && a[0]>b[0]) sum++;

        cout<<sum<<endl;
    }
    return 0;
}