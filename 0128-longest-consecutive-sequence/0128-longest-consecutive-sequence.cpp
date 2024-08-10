class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
       int c=1;
       unordered_set<int>res;
       for(auto ele:nums){
        res.insert(ele);
       }
       for(auto e:res){
        if(res.find(e-1)==res.end()){
            int cnt=1;
            int vel=e;
            while(res.find(vel+1)!=res.end()){
                cnt++;
                vel=vel+1;
            }
           c=max(c,cnt);
        }
         
       }
      return c;
    }
};