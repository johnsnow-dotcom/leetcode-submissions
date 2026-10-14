class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
    int x = text1.size(), y = text2.size();
    vector<vector<int>>dp(x,vector<int>(y));
    text1[0]==text2[0]?dp[0][0]=1:dp[0][0]=0;
    for(int j=1;j<y;j++) dp[0][j]=(text1[0]==text2[j])?1:dp[0][j-1];
    for(int i=1;i<x;i++) dp[i][0]=(text1[i-1]==text2[0])?1:dp[i-1][0];
    for(int i=1;i<x;i++){
        for(int j=1;j<y;j++){
            if(text1[i]==text2[j]) dp[i][j] = dp[i-1][j-1]+1;
            else
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }   
    return dp[x-1][y-1];
    }
};