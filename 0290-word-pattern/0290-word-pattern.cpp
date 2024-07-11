class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.length();
       vector<string> str;
        string temp;
        for (int i=0;i<s.length();i++) {
            if (s[i]==' ') {
                if (!temp.empty()) {
                    str.push_back(temp);
                    temp.clear();
                }
            } else {
                temp.push_back(s[i]);
            }
        }
        if (!temp.empty()) {
            str.push_back(temp);
        }
        if(str.size()!=pattern.length())return false;
        unordered_map<char,string>res;
        unordered_map<string,char>res1;
        for(int i=0;i<pattern.length();i++){
            if(res.find(pattern[i])==res.end()&&res1.find(str[i])==res1.end()){
                res[pattern[i]]=str[i];  
                res1[str[i]]=pattern[i]; 
            }
            else{
                if(res[pattern[i]]!=str[i]||res1[str[i]]!=pattern[i]){
                    return false;
                }
            }

        }
          return true;
    }
};