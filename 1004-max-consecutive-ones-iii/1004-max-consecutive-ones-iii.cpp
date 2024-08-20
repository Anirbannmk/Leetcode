class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l,r,zero,maxi,len;
        l=r=0;
        zero=0;
        maxi=INT_MIN;
        len=0;
        while(r<nums.size()){
            if(nums[r]==0)zero++;
            if(zero>k){
                if(nums[l]==0)zero--;
                l++;
            }
            if(zero<=k){
                len=r-l+1;
                maxi=max(maxi,len);
            }
            r++;
        }
        return maxi;
    }
};