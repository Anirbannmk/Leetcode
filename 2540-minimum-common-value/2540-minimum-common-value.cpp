class Solution {
public:
  bool findele(vector<int>vec,int num){
      return find(vec.begin(),vec.end(),num)!=vec.end();
  }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1);
       nums3.insert(nums3.end(),nums2.begin(),nums2.end());
        map<int,int>res;
       int min;
       for(auto ele:nums3){
           res[ele]++;
       }
      for(auto ele:res){
          if(ele.second>1&&findele(nums2,ele.first)&&findele(nums1,ele.first)){
            return ele.first;
          }
      }
      return -1;
    }
};