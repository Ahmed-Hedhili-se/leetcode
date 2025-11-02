
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string r = "";

        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return r;
                }
            }

            
            r += c;
        }

        return r;
    }
};