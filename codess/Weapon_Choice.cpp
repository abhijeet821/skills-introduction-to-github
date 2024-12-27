#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,h,y1,y2,k;
        cin>>h>>x>>y1>>y2>>k;
        if(h%x!=0){
            a=h/x +1;
        }
        else a=h/x;
        int b,cnt=0;
        if(h<k*y1){
            if(h%y1!=0){
                cnt=(h/y1)+1;
            }
            else cnt=h/y1;
        }
        else{
            h-=k*y1;
            cnt=k;
            if(h%y2==0){
                cnt+=h/y2;
            }
            else cnt+=(h/y2)+1;
        }
        if(a==0) a++;
        cout<<min(a,cnt)<<endl;        
    }

    return 0;
}