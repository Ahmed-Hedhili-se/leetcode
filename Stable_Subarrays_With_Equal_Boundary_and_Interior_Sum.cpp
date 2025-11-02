#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll= long long ;

class Solution {
    
public:
    long long countStableSubarrays(vector<int>& v) {
        int n = v.size();
        vector <ll>pref(n);
        for (int i=0 ;i<n;i++){
            pref[i]=v[i];
            if (i) pref[i]+=pref[i-1];
                
        }
        ll ans =0;
        map <pair<int ,ll > , int >mp;
        for (int i=n-1 ;i>=0; i--){
            ans += mp [{v[i], pref[i]+2*v[i]}];
            if (i+1<n) mp[{v[i+1] , pref[i+1]}]++;
        }
        return ans;
    }
};