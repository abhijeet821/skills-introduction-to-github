#include <bits/stdc++.h>
using namespace std;
// #define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int a[n];
        int b[26]={0};
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int k=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                s+='a'+k;
                b[k]++;
            }
            else{
                for(int j=0; j<26; j++ ){
                    if(a[i]==b[j]){
                        s+=('a'+j);
                        b[j]++;
                        break;
                    }
                }
                k--;
            }
            k++;
        }
        cout<<s<<endl;
    }

    return 0;
}