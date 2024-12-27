#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0,z=0,w=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<"YES"<<endl;
        else{
            for (int i = 0; i < n; i++)
            {
                // if(a[i]==b[i] && a[i]!='b') continue;
                if((a[i]=='b' && b[i]!='b') || (a[i]!='b' && b[i]=='b')){
                    w=-1;
                    break;
                } 
                else if(a[i]=='a' && b[i]=='c'){ x++;}
                else if((a[i]==b[i]=='b') && x>=1) y++;
                else if(a[i]=='c' && b[i]=='a'){
                    if(x>0 && y>0) z++;
                    else {
                        w=-1;
                        break;
                    }
                }
            }
            if(w==-1) cout<<"NO"<<x<<y<<z<<endl;
            else if(x==z && y>0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}