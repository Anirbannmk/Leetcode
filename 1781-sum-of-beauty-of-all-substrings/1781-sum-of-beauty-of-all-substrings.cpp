class Solution {
public:
   int mincal(int arr[]){
    int mine=INT_MAX;
    for(int i=0;i<26;i++){
        if(arr[i]>0&&arr[i]<mine){
            mine=arr[i];
        }
    }
    return mine;
   }
   int maxcal(int arr[]){
    int maxe=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxe){
            maxe=arr[i];
        }
     }
     return maxe;
   }
    int beautySum(string s) {
      int i,j;
      long sum=0;
      int n=s.length();
      for(i=0;i<n;i++){
        int arr[26]={0};
        for(j=i;j<n;j++){
          arr[s[j]-'a']++;
          int minc=mincal(arr);
          int maxc=maxcal(arr);
          sum+=maxc-minc;
        }
      }
      return sum;  
    }
};