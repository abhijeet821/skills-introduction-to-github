#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back

int32_t main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> row1(n), row2(n);
        for (int i = 0; i < n; ++i) cin >> row1[i];
        for (int i = 0; i < n; ++i) cin >> row2[i];
        
        vector<int> prefixSum1(n + 1, 0), prefixSum2(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum1[i + 1] = prefixSum1[i] + row1[i];
            prefixSum2[i + 1] = prefixSum2[i] + row2[i];
        }
        
        int result = LLONG_MAX;

        for (int i = 0; i < n; ++i) {
            int topPath = prefixSum1[n] - prefixSum1[i + 1];
            int bottomPath = prefixSum2[i];

            result = min(result, max(topPath, bottomPath));
        }

        cout << result << "\n";
    }
    return 0;
}