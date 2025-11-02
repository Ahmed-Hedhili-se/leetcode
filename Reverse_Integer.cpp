#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int reverse(int x) {
        long long r = 0;
        while (x != 0) {
            r = r * 10 + x % 10;
            x /= 10;
        }
        // Check 32-bit signed integer range
        if (r < INT_MIN || r > INT_MAX) return 0;
        return (int)r;
    }
};