class Solution {
public:
    int romanToInt(string s) {
      /*   char sym[7]={'I','V','X','L','C','D','M'};
       int val[7]={1,5,10,50,100,500,1000};
       map<char,int>mp;
       for(int i=0;i<7;i++){
        mp[sym[i]]=val[i];
       }
        int len=s.length();
        int sum=0;
        for(int i=len-1;i>=0;i--){
        sum+=mp[s[i]];
        if((s[i]=='I'&&s[i+1]=='V')||(s[i]=='I'&&s[i+1]=='X')){
            sum-=2*mp[s[i]];
        }
        else if((s[i]=='X'&&s[i+1]=='L')||(s[i]=='X'&&s[i+1]=='C')){
             sum-=2*mp[s[i]];
        }
        else if((s[i]=='C'&&s[i+1]=='D')||(s[i]=='C'&&s[i+1]=='M')){
            sum-=2*mp[s[i]]; 
        }
        }
        return sum; */
         int len=s.length();
        int sum=0;
        for(int i=len-1;i>=0;i--){
            switch(s[i]){
                case 'I':sum+=(sum>=5)?-1:1;break;
                case 'V':sum+=5;break;
                case 'X':sum+=(sum>=50)?-10:10;break;
                case 'L':sum+=50;break;
                case 'C':sum+=(sum>=500)?-100:100;break;
                case 'D':sum+=500;break;
                case 'M':sum+=1000;break;
            }
        }
        return sum;
    }
};