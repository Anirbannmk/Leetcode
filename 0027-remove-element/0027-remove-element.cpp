class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>num1;
        for(auto e:nums){
            if(e!=val){
                num1.push_back(e);
            }
        }
        nums.clear();
        for(auto e:num1){
            nums.push_back(e);
        }
        return nums.size();
    }
};