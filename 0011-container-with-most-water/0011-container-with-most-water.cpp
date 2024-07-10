class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0;
      int j=height.size()-1;
      int maxarea=0;
       while(i<j){
         int m=min(height[i],height[j]);
         int mul=m*(j-i);
         maxarea=max(mul,maxarea);
         if(height[i]<height[j]){
            i++;
         }
         else{
            j--;
         }
       }
       return maxarea;
    }
};