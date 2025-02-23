#include <vector>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> v;

        for(int i = 0; i < nums1.size(); i++) {  // Fixed loop condition
            for(int j = 0; j < nums2.size(); j++) {  // Fixed loop condition
                if(nums1[i] == nums2[j]) {
                    // Check manually if nums1[i] is already in 'v' to avoid duplicates
                    bool alreadyExists = false;
                    for(int k = 0; k < v.size(); k++) {
                        if(v[k] == nums1[i]) {
                            alreadyExists = true;
                            break;
                        }
                    }
                    if(!alreadyExists) {
                        v.push_back(nums1[i]);
                    }
                }
            }
        }
        return v;
    }
};
