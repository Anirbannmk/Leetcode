class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int>s;
      for(auto e:nums){
          s.insert(e);
      }
      nums.clear();
      for(auto e:s){
          nums.push_back(e);
      }
      return nums.size();
    }
};