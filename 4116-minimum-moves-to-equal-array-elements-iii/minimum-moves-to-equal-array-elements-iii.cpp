class Solution {
public:
    int minMoves(vector<int>& nums) {
       int ma = 0;
       for(int x:nums) ma = max(x,ma);
       int mid = ma;
       int ans =0;
       for(int x:nums) ans+=abs(mid-x);
       return ans;

    }
};