class Solution {
public:
    string finalString(string s) {
        string x="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i') reverse(x.begin(), x.end());
            else x+=s[i];
        }
        return x;
    }
};