class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int mid = nums[nums.size()-1];
       int ans =0;
       for(int x:nums) ans+=abs(mid-x);
       return ans;

    }
};