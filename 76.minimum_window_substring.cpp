class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char, int> map;
        for (char c : t)
            map[c]++;

        int i = 0, j = 0;
        int count = map.size();
        int left = 0, right = 0;
        int minLen = INT_MAX;
        bool found = false;

        while (j < s.length()) {
            char endChar = s[j++];
            if (map.count(endChar)) {
                map[endChar]--;
                if (map[endChar] == 0) count--;
            }

            if (count > 0) continue;

            while (count == 0) {
                if ((j - i) < minLen) {
                    left = i;
                    right = j;
                    minLen = j - i ;
                    found = true;
                }

                char startChar = s[i++];
                if (map.count(startChar)) {
                    map[startChar]++;
                    if (map[startChar] > 0) count++;
                }
            }
        }

        return !found ? "" : s.substr(left, right - left);
    }
};