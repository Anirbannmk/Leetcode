class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for(auto ele:strs){
            string t=ele;
            sort(ele.begin(),ele.end());
            res[ele].push_back(t);
        }
        vector<vector<string>>v;
        for(auto ele:res){
            vector<string>r;
            for(auto e:ele.second){
                r.push_back(e);
            }
            v.push_back(r);
        }
        return v;
    }
};