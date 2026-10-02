class Solution {
public:
 void backtrack(int n,int open,int close,string str,vector<string>&result){

        if((close==n)&&(open==n)){
        result.push_back(str);
        return;
        }
        if(open<n){
         
          backtrack(n,open+1,close,str+"(",result);
        }
        if(close<open){
            
            backtrack(n,open,close+1,str+")",result);

        }
       
       } 
    vector<string> generateParenthesis(int n) {
    vector<string>result;
    backtrack(n,0,0,"",result);
    return result;     
    }
};