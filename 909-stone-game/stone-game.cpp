class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice = 0;
        int bob = 0;
        int n = piles.size();
        for(int i=0;i<piles.size();i++){
          if(i<n-i-1){
            if(piles[i]>piles[n-i-1]){
                alice+=piles[i];
                bob+=piles[n-i-1];
            }
            if(piles[n-i-1]>piles[i]){
                alice+=piles[n-i-1];
                bob+=piles[i];
            }
            else{
                alice+=piles[i];
                bob+=piles[n-i-1];
          }
          }     
        }
        return alice>bob;
    }
};