class Solution {
public:
    int jump(vector<int>& nums) {
      int n = nums.size();
      int steps = 0;
      int farthest = 0;
      int reach = 0;
      for(int i=0;i<n-1;i++){
        reach = max(reach,nums[i]+i);
        if(farthest==i){
         farthest = reach;
         steps++;
        }
      }
      
    return steps;
    }
};