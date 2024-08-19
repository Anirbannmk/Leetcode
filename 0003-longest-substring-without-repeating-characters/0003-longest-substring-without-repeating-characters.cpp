class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=0;
       int r=0;
       int n=s.size();
       if(n==0)return 0;
       int len=0;
       int mlen=INT_MIN;
       map<char,int>res;
       while(r<n){
         if(res.find(s[r])!=res.end()){
            if(res[s[r]]>=l){
                l=res[s[r]]+1;
                res[s[r]]=r;
            }
            else{
            len=r-l+1;//this is the case where i not consider the value which index is lesser than l 
            res[s[r]]=r;//this is the important think, we avoid this but we need to update this;
            mlen=max(mlen,len);
            }
         }
         else{
            len=r-l+1;
            mlen=max(mlen,len);
            res[s[r]]=r;
         }
          r++;
       } 
       return mlen;
    }
};