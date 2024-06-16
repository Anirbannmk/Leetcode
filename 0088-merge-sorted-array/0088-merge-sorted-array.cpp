class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int>v3;
         int k=0;
         while(m--){
           v3.push_back(nums1[k]);
           k++;
         }
         k=0;
         while(n--){
            v3.push_back(nums2[k]);
            k++;
         }
         sort(v3.begin(),v3.end());
         nums1.clear();
         for(auto ele:v3){
            nums1.push_back(ele);
         }
        }
};