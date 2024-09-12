class Solution {
public:
    bool rotateString(string s, string goal) {
        vector<char>vec;
        vector<char>g;
        for(auto ele:s){
            vec.push_back(ele);
        }
        for(auto ele:goal){
            g.push_back(ele);
        }
        int len=vec.size();
        for(int i=0;i<len;i++){
        if(vec==g)return true;
        rotate(vec.begin(),vec.begin()+1,vec.end());
        }
        return false;
    }
};