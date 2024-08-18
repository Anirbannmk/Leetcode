class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') c++;
            else c--;
            if(c==0 || (c==1&&s[i]!=')'))continue;
            else str+=s[i];
        }
        return str;
    }
};