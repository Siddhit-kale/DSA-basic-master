#include <vector>
#include <algorithm> 

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int maxwealth = 0;  
        int row = accounts.size(); 
        int cols = accounts[0].size();  

        for (int i = 0; i < row; i++) {
            int wealth = 0;
            for (int j = 0; j < cols; j++) {
                wealth += accounts[i][j];
            }
            maxwealth = max(maxwealth, wealth);
        }
        return maxwealth;
    }
};
