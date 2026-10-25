class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       vector<int>ans;
       stack<int>st;
       for(int x:asteroids){
        bool y = true;
        while(y&&!st.empty()&&st.top()>0&&x<0){
            if(st.top()<-x){
               st.pop(); 
            }
            else if(st.top()==-x){
                st.pop();
                y = false;
            }
            else y = false;
        }
        if(y) st.push(x);
       }
       while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};