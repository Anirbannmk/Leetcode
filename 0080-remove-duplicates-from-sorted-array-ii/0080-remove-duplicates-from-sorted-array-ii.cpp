class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>res;
        vector<int>m;
        for(auto ele:nums){
            res[ele]++;
        }
        for(auto ele:res){
            if(ele.second>=2){
                m.push_back(ele.first);
                m.push_back(ele.first);
            }
            else if(ele.second==1){
                m.push_back(ele.first);
            }
        }
        nums.clear();
        for(auto ele:m){
            nums.push_back(ele);
        }
        return nums.size();
    }
};