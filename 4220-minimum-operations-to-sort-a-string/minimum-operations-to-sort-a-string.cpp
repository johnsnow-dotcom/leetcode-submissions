class Solution {
public:
    int minOperations(string s) {
      string str = s;
      sort(s.begin(),s.end());
      if(str==s) return 0;
      char mn , mx;
      int a = INT_MAX;
      int b = INT_MIN;
      for(char x:s){
        if(x-'a'>b){
            b = x-'a';
            mx = x;
        }
        if(x-'a'<a){
            a = x-'a';
            mn = x;
        }
      }
      int n = s.length();
      if(n==2) return -1;
      if(str[0]==mn||str[n-1]==mx) return 1;
      for(int i=1;i<n-1;i++){
        if(str[i]==mn||str[i]==mx) return 2;
      }
      return 3;
    }
};