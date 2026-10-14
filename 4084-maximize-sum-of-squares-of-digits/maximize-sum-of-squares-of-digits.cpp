class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       string str;
       if(sum>9*num) return "";
       while(num-->0){
        int x = min(9,sum);
        str += char('0'+x);
        sum-=x;
       } 
       return sum==0?str:"";
    }
};