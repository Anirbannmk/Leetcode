class Solution {
public:
     
     int check(vector<int>nums, int goal){
        int l=0;
        int r=0;
        int size=nums.size();
        long sum=0;
        int cnt=0;
        while(r<size){
            sum+=nums[r];
            while(sum>goal&&l<=r) {
                sum=sum-nums[l];
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
     }



    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal==0) return check(nums,goal);
     return check(nums,goal)-check(nums,goal-1);
    }
};