class Solution:
    def minMoves(self, nums: List[int]) -> int:
        x = 0
        for i in nums:
            x = max(i,x)
        ans = 0
        for i in nums:
            ans += abs(i-x)
        return ans
        

        