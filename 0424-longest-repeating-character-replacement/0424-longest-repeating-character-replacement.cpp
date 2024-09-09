class Solution {
public:
    int characterReplacement(string s, int k) {
        int len=s.length();
        int l=0;
        int r=0;
        int maxlen=0;
        int maxfreq=0;
        map<char,int>res;
        while(r<len){
         res[s[r]]++;
         maxfreq=max(maxfreq,res[s[r]]);
         if((r-l+1)-maxfreq>k){
            res[s[l]]--;
            l++;
         }
         if((r-l+1)-maxfreq<=k){
            maxlen=max(maxlen,r-l+1);
         }
         r++;
        }
        return maxlen;
    } 
};