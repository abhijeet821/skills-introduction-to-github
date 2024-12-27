#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,k;
        int cnt=0;
        cin>>x>>y>>k;
        if(x<k && y<k){
            cnt=2;
        }
        else if(x<k && y>=k){
            cnt= y/k;
            if(y%k !=0){
                cnt++;
            }
            cnt*=2;
        }
        else if(x>=k && y<k){
            cnt= x/k;
            if(x%k !=0){
                cnt++;
            }
            // else cnt--;
            cnt+= x/k;
        }
        else if(x>=k && y>=k){
            if(x==y){
                cnt=x/k;
                cnt*=2;
            }
            else if(x>y){
                cnt= x/k;
                if(x%k !=0){
                    cnt++;
                }
                else cnt--;
                cnt+= x/k;
            }
            else if(y>k){
                cnt= y/k;
                if(y%k !=0){
                    cnt++;
                }
                cnt*=2;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}