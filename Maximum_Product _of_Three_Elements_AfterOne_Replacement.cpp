
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
    using ll = long long;
public : 
    ll maxProduct(vector <int >&a){
    int n =a.size();
        for (auto &x : a) x =abs(x);
        sort (a.begin(), a.end());
        return (ll)a[n-1]*a[n-2]*100000;

        
    }


    
};
