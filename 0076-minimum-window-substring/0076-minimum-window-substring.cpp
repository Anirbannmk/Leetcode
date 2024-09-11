class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0;
       int minlen=1e9;
         int sindex=-1;
        map<char,int>mp;
        int lent=t.length();
        for(int i=0;i<lent;i++){
            mp[t[i]]++;
        }
        int lens=s.length();
        int c=0;
        while(r<lens){
          if(mp[s[r]]>0){
            c++;
          }
           mp[s[r]]--;
          while(c==lent){
           if(r-l+1<minlen){
            minlen=r-l+1;
            sindex=l;
           }
           mp[s[l]]++;
           if(mp[s[l]]>0){
            c=c-1;
           }
           l++;
          }
          r=r+1;
        }
        return sindex==-1?"":s.substr(sindex,minlen);
    }
};