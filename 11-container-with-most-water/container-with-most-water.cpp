class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0,j=height.size()-1;
     int x,cap=0;
     while(i<=j)
     {
       if(height[i]<height[j]) 
       { 
        x = min(height[i],height[j]);
       cap=max(cap,x*abs(i-j));
       i++;

       } 
       else {
        x = min(height[i],height[j]);
       cap=max(cap,x*abs(i-j));
       j--;
       }
       
     } 
     return cap;  
    }
};