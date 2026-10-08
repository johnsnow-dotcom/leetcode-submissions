class Solution {
public:
    string removeOuterParentheses(string s) {
     string str;
     int balance = 0 ;
     for(char c:s) if(c==')'?--balance:balance++) str+=c;
     return str;
    }
};