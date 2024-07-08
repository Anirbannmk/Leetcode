class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        int k=0;
        int l=0;
        for(int i=0;i<l1;i++){
            for(int j=k;j<l2;j++){
                    if(s[i]==t[j]){
                        l++;
                        k++;
                        break;
                    }
                    else{
                        k++;
                    }
            }
        }
        if(l==l1){
            return true;
        }
        else{
            return false;
        }
    }
};