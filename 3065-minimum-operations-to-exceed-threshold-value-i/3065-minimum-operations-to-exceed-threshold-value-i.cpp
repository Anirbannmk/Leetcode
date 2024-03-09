class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int c=0;
        for(auto e:nums){
            if(e<k) c++;
        }
        return c;
    }
};