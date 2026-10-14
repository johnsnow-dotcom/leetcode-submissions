class Solution {
public:
    string removeKdigits(string num, int k) {
     if(num.size()<=k) return "0";   
     stack<char>st;
     st.push(num[0]);
     for(int i =1;i<num.length();i++){
        while(!st.empty()&&k>0&&(st.top()-'0'>num[i]-'0')){
            st.pop();
            k--;
        }
        st.push(num[i]);
     }
       while(k > 0 && !st.empty()) {
        st.pop();
        k--;
    }
     string str;
     while(!st.empty()){
        str.push_back(st.top());
        st.pop();
     }
     reverse(str.begin(),str.end());
   int pos = 0;
    while(pos < str.size() && str[pos] == '0') pos++;
    str = str.substr(pos);

    return str.empty() ? "0" : str;
    }
};