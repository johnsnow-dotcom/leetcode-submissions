class Solution {
public:
    string removeOuterParentheses(string s) {
     string str;
     int balance = 0 ;
     for(char c:s) if(c&1?--balance:balance++) str+=c;
     return str;
    }
};