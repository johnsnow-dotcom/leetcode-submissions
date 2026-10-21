class Solution {
public:
    bool subcheck(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0 , r = s.length()-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return subcheck(s,l+1,r)||subcheck(s,l,r-1);
            }
        }
        return true;
    }
};