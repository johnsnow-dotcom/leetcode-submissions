class Solution {
public:
    int minSteps(string s, string t) {
       vector<int>freq(26,0);
       int ans = 0 ;
       for(char x:s) freq[x-'a']++;
       for(char x:t) freq[x-'a']--; 
       for(int i=0;i<freq.size();i++){
        if(freq[i]<0) ans+=abs(freq[i]);
       }
       return ans;
    }
};