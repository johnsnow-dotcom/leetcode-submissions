class Solution {
public:
    void backtrack(vector<int>&nums,vector<int>ans,vector<vector<int>>&result)
    {
        if(nums.empty()){
            result.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            ans.push_back(x);
            vector<int>rem;
            for(int j=0;j<nums.size();j++){
                if(i!=j) rem.push_back(nums[j]);
            } 
            backtrack(rem,ans,result);
            ans.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>result;
       vector<int>ans;
       backtrack(nums,ans,result);
       return result; 
    }
};