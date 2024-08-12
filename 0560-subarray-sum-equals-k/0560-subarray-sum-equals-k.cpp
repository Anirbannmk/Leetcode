class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        int n=nums.size();
        int prevsum=0;
        int count=0;
        m[0]=1;
        for(int i=0;i<n;i++){
            prevsum+=nums[i];
           int target=prevsum-k;
           count+=m[target];
           m[prevsum]+=1;
        }
        return count;
    }
};