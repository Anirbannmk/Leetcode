class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int> m;
        for(auto &e:nums){
            m[e]++;
        }
    int max=0;
    for(const auto &i:m){
        if(i.second>max){
            max=i.second;
        }
    }
    int c=0;
    for(const auto &j:m){
        if(j.second==max){
            c+=max;
        }
    }
    return c;
    }
    
};