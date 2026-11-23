class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str;
        int i = 0 , j = 0 ;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){
                str.push_back(s[i]);
                i++;
                j++;
            }
            else if(s[i]!=t[j]) j++;
        }  
        if(s==str) return true;
        else return false;
    }
};