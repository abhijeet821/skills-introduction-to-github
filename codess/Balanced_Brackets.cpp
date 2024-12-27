#include <bits/stdc++.h>
using namespace std;
// #define int long long 
#define pb push_back

unordered_map<char,int> m={{'[',-3}, {'{',-2}, {'(',-1}, {')',1}, {'}',2}, {']',3}};

string isbalanced(string s){
    stack<char> st;
    for(auto bracket:s){
        if(m[bracket]<0) st.push(bracket);
        else{
            if(st.empty()) return "NO";
            if(m[st.top()]+m[bracket]==0) st.pop();
            else return "NO";
        }
    }
    if(st.empty()) return "YES";
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans=isbalanced(s);
        cout<<ans<<endl;
    }

    return 0;
}