class Solution {
public:
    void backtrack(string s,int b,int e,char open,char close,vector<string>&ans){
        int balance = 0 ;
        for(int i=b;i<s.length();i++){
            if(s[i]==open) balance++;
            else if(s[i]==close) balance--;
            if(balance>=0) continue;
            for(int j=e;j<=i;j++){
                if(s[j]==close&&(j==e||s[j-1]!=close)){
                    backtrack(s.substr(0,j)+s.substr(j+1),i,j,open,close,ans);
                }
            }
            return;
        }
        reverse(s.begin(),s.end());
        if(open=='(') backtrack(s,0,0,')','(',ans);
        else ans.push_back(s);
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string>ans;
        backtrack(s,0,0,'(',')',ans);
        return ans;
    }
};