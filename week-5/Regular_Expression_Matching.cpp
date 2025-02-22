#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector dp = vector(n+1, vector(m+1, false)); // DP table
        dp[n][m] = true; // Empty string matches empty pattern
        
        for (int i = n; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                // Check for character match or '.'
                bool match = (i < n) && (p[j] == s[i] || p[j] == '.');
                
                if (j + 1 < m && p[j + 1] == '*') {
                    // Handle '*': Skip (dp[i][j+2]) or consume (match && dp[i+1][j])
                    dp[i][j] = dp[i][j + 2] || (match && dp[i + 1][j]);
                } else {
                    // Normal match
                    dp[i][j] = match && dp[i + 1][j + 1];
                }
            }
        }
        return dp[0][0]; // Final result
    }
};