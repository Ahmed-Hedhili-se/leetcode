
#include <bits/stdc++.h>
#include <vector>
using namespace std;



class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector <int >r;
        if (nums.empty()) {return r;}
        int minn = *min_element(nums.begin(),nums.end());
        int maxx = *max_element(nums.begin(),nums.end())   ;
        for ( int i = minn+1  ;i<maxx; i++){
            if (find(nums.begin(), nums.end(), i) == nums.end()){
                r.push_back(i);
            }
        }
        return r;
    }
};

