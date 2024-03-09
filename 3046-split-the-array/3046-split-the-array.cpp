class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>split;
        for(auto e:nums){
            split[e]++;
        }
        for(auto e:split){
            if(e.second>2){
                return false;
            }
        }
        return true;
    }
};