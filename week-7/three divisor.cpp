#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isThree(int n) {
        
        int divisor = 0;
        for(int i=1; i<=n; i++) {
            if((n % i) == 0) {
                divisor++;
            }
        }

        if(divisor == 3) {
            return true;
        }
        else{
            return false;
        }
    }
};