class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>res;
        for(auto ele:nums){
          res[ele]++;
        }
        int c=0;
        int v;
        for(auto ele:res){
            if(ele.second>c){
                c=ele.second;
                v=ele.first;
            }
        }
        return v;
    }
};