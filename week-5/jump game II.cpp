#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int count =0, far = 0, jumps = 0;

        while(far < nums.size() - 1) {
            int farthest = 0;
            for(int i=count; i <= far; i++) {
                farthest = max(farthest, i + nums[i]);
            }
            count = far + 1;
            far = farthest;
            jumps++;
        }

        return jumps;
    }
};