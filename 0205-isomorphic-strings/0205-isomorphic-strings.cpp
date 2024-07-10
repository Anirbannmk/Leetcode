class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>res1;
         unordered_map<char,char>res2;
        for(int i=0;i<s.length();i++){
        if((res1.find(s[i])==res1.end())&&(res2.find(t[i])==res2.end())){
           res1[s[i]]=t[i]; 
           res2[t[i]]=s[i];
            }
            else{
                if((res1[s[i]]!=t[i])||res2[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;

    }
};