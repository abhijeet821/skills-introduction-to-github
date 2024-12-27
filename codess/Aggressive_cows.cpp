#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

// bool check(int mid, int *a, int c, int n){
//     int x=a[0],cnt=1,id=0;
//     while(id<n){
//         id=lower_bound(a,a+n,x+mid)-a;
//         if(id<n){
//             x=a[id];
//             cnt++;
//         }
//     }
//     return cnt>=c;
// }

bool check(int mid, int *a, int c, int n){
    int x=a[0];
    c--;
    while(c--){
        if(x+mid<=a[n-1]){
            x=*lower_bound(a,a+n,x+mid);
        }
        else return false;
        *
    }
    return true;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,ans=0;
        cin>>n>>c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int lo=0,hi=a[n-1];
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(check(mid,a,c,n)){
                lo=mid+1;
                ans=mid;
            }
            else hi=mid-1;
        }
        cout<<ans<<endl;
    }

    return 0;
}