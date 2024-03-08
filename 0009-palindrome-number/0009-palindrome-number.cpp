class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        else{
            int i,j,k;
            long sum=0;
            j=x;
            while(x!=0){
            i=x%10;
            sum=sum*10+i;
            x=x/10;
            }
            if(j==sum){
                return true;
            }
            else{
                return false;
            }
        }
    }
};