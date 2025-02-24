#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int l=0, r=height.size()-1;

        while(l<r) {
            int w = r - l;
            int h = min(height[l], height[r]);
            int currentwater = w * h;
            maxwater = max(maxwater, currentwater);

            height[l] < height[r] ? l++ : r--; 
        }
        return maxwater;
    }
};