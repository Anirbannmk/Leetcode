class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int e=numbers.size()-1;
        int s=0;
        vector<int>v;
        while(s<e){
            if(numbers[s]+numbers[e]==target){
                v.push_back(s+1);
                v.push_back(e+1);
                return v;
            }
            else if(numbers[s]+numbers[e]>target){
               e--;
            }
            else{
               s++;
            }
        }
        return v;
    }
};