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
        while(1){
            if(a==0 && b==0){
                cout<<"YES"<<endl;
                break;
            }
            else if(a==0 || b==0){
                cout<<"NO"<<endl;
                break;
            }
            if(a>=b){
                a-=2;
                b--;
            }
            else{
                a--;
                b-=2;
            }
            
        }
    }

    return 0;
}