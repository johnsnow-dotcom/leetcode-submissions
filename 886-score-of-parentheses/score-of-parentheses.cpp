class Solution {
public:
    int scoreOfParentheses(string s) {
      stack<int>st;
      st.push(0);
      for(char x:s){
        if(x=='(') st.push(0);
        else{
            int i = st.top();
            st.pop();
            if(i==0){
                int j = st.top();
                st.pop();
                st.push(j+=1);
            }
            else{
                int j = st.top();
                st.pop();
                st.push(j+2*i);
            }
        }
      }  
      return st.top();
    }
};