class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res;
        int c=1;
        int i;
        for (i=digits.size()-1;i>=0;i--) {
            int sum=digits[i]+c;
            res.push_back(sum%10);
            c=sum/10;
        }
        if(c!=0){
        res.push_back(c);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};