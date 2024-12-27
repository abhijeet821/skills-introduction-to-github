#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;
        int a[n];
        if((l+1)/2>=n){
            for(int i=0; i<n; i++) cout<<i+1<<" ";
            cout<<endl;
        }
        else{
            a[0]=l,a[1]=l*2;
            int sum=3*l;
            for (int i =2; i < n; i++)
            {
                a[i]=sum+1;
                sum=a[i]+l;
            }
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            
            cout<<endl;
        }
    }

    return 0;
}