class Solution {
public:
    int minTimeToType(string word) {
        int current = 'a';
        int total = 0;
        for(int i = 0; i < word.size(); i++){
            total += min(abs(word[i]-current),26 - abs(word[i]-current)) + 1; 
            current = word[i];
        }
        return total;
    }
};