class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";  
        
        for(char c : address) {  
            if (c == '.') {
                result += "[.]";  // Replace '.' with "[.]"
            } else {
                result += c;  // Append other characters as they are
            }
        }
        
        return result;  
    }
};
