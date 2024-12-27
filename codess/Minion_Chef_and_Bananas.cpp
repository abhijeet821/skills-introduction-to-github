#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

bool ishoursufficient(int mid, int *a,int n,int h){
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<mid) cnt++;
        else if(a[i]%mid==0) cnt+=a[i]/mid;
        // else cnt+=1+ (a[i]/mid);
        else if(a[i]>mid) cnt= cnt+ 1 +(a[i]/mid);
    }
    return cnt<=h;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int lo=1,hi=a[n-1],ans=1;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(ishoursufficient(mid,a,n,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}