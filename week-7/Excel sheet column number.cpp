#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long total = 0;
        int n = columnTitle.size();
        long long mul = 1;
        for(int i=n-1; i>=0; i--){
            total += (columnTitle[i]-'A'+1)*mul;
            mul*=26LL;
        }
        return total;
    }
};