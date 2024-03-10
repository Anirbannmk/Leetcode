class Solution {
public:

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        set<int>s;
        if(nums1.size()<nums2.size()){
           for(auto ele:nums1){
               s.insert(ele);
           }
           
           for(auto e:nums2){
               for(auto ele:s){
                   if(ele==e){
                       res.push_back(ele);
                       s.erase(ele);
                   }
               }
           }
        }
        else{
           for(auto ele:nums2){
               s.insert(ele);
           }
           for(auto e:nums1){
               for(auto ele:s){
                   if(ele==e){
                    res.push_back(ele);
                     s.erase(ele);
                   }
               }
           }
           
        } 
            return res;  
    }
};