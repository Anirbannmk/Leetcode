class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int>res;
        for(auto ele:nums){
            res[ele]++;
        }
        for(auto ele:res){
            if(ele.second>=2){
                return true;
            }
        }
        return false;
    }
};