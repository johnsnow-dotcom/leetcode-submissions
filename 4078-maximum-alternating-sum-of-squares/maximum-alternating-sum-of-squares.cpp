class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
     int n = nums.size();
     vector<long long>alter(n);
     for(int i=0;i<n;i++) alter[i]=nums[i]*nums[i];
     vector<long long>result(n);
     sort(alter.begin(),alter.end());
     long long  score  = 0;
     int k = n/2;
     for(int i=0;i<k;i++) score-=alter[i];
     for(int i=k;i<n;i++) score+=alter[i];
     return score;
    }
};