class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
       stack<int>s1;
       stack<int>s2;
       s1.push(nums[0]);
       s2.push(nums[1]);
       int i;
       for(i=2;i<nums.size();i++){
           if(s1.top()>s2.top()){
               s1.push(nums[i]);
           }
           else{
               s2.push(nums[i]);
           }
       } 
    vector<int>v1;
    vector<int>v2;
    while(!s1.empty()){
        v1.push_back(s1.top());
        s1.pop();
    }
    while(!s2.empty()){
        v2.push_back(s2.top());
        s2.pop();
    }
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    v1.insert(v1.end(),v2.begin(),v2.end());
    return v1;
    }
};