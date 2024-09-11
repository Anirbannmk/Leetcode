class Solution {
public:
    int count(vector<int>nums, int k){
        int l=0,r=0,maxcount=0;
        unordered_map<int,int>mp;
        int size=nums.size();
        int cnt=0;
        while(r<size){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                l++;
            }
            if(mp.size()<=k){
                cnt++;
                maxcount+=r-l+1;
                r++;
            }
        }
     return maxcount;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
    }
};