class Solution {
public:
    int maxDepth(string s) {
     int maxlen=0;
     int len=0;
     int l=s.length();
     for(int i=0;i<l;i++){
        if(s[i]=='('){
            len++;
        }
        else if(s[i]==')'){
            len--;
        }
        maxlen=max(len,maxlen);
     }
     return maxlen;
    }
};