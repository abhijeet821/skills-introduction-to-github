#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int h,w,xa,xb,ya,yb;
        cin>>h>>w>>ya>>xa>>yb>>xb;
        int d=yb-ya,x=1;
        int la,lb,ra,rb,a,b;
        if(ya>=yb) cout<<"Draw"<<endl;
        else{
            if(d%2==0){
                la=max(x,xa-(d/2));
                ra=min(w,xa+(d/2));
                lb=max(x,xb-(d/2));
                rb=min(w,xb+(d/2));
                if(lb<=la && rb>=ra){
                    cout<<"Bob"<<endl;
                }
                else cout<<"Draw"<<endl;
            }
            else{
                a=(d/2)+1;
                b=d/2;
                la=max(x,xa-a);
                ra=min(w,xa+a);
                lb=max(x,xb-b);
                rb=min(w,xb+b);
                if(lb>=la && rb<=ra) cout<<"Alice"<<endl;
                else cout<<"Draw"<<endl;
            }
        }
    }
    return 0;
}