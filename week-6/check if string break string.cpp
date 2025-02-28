#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {

            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            int n = s1.size();
            int counts1 = 0;
            int counts2 = 0;

            for(int i=0; i<n; i++) {
                if(s1[i] >= s2[i]) {
                    counts1++;
                }
                if(s2[i] >= s1[i]) {
                    counts2++;
                }
            }

            if(counts1 == n || counts2 == n) return true;
        
            return false;
    }
};