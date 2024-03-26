class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.size() == 1){
            return strs[0];
        }
        vector<char> v;
        int k = 0;
        while(true){
            char c = strs[0][k];
            for(int i=1; i<strs.size(); i++){
                if(strs[i].length() <= k||strs[i][k] != c){
                    return s;
                }
            }
            v.push_back(c);
            s = string(v.begin(), v.end());
            k++;
        }
        return s;
    }
};