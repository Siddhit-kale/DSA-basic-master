#include <string>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        char missingChar = 0;  // Store the missing character

        for(int i = 0; i < s.length(); i++) {
            missingChar ^= s[i];  // XOR all characters in s
        }

        for(int j = 0; j < t.length(); j++) {
            missingChar ^= t[j];  // XOR all characters in t
        }

        return missingChar;  // The result will be the extra character in t
    }
};
