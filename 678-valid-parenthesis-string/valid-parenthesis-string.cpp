class Solution {
public:
    bool checkValidString(string s) {
     stack<char>st;
     stack<char>st2;
     for(int x=0;x<s.length();x++){
        if(s[x]=='(') st.push(x);
        if(s[x]=='*') st2.push(x);
        if(s[x]==')'){
            if(!st.empty()) st.pop();
            else if(!st2.empty()) {
                st2.pop();
            }
            else return false;
        }
     }
     while(!st.empty()&&!st2.empty()){
        if(st.top()<st2.top()){
            st.pop();
            st2.pop();
        }
        else return false;
     }
     return st.empty();
    }
};