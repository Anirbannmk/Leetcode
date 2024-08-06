class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto ele:nums){
            sum+=ele;
        }
        int res=(n*(n+1))/2;
        return res-sum;
    }
};