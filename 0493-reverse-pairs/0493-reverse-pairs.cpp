class Solution {
public:
    long merge(vector<int>&arr,int left,int mid,int right){
        int s=left;
        int h=mid+1;
       int c=0;
        vector<int>temp;
        for(int i=left;i<=mid;i++){
            while(h<=right&&arr[i]>arr[h]*2LL)h++;
                c+=h-(mid+1); 
        }
        s=left;
        h=mid+1;   
        while(s<=mid&&h<=right){
            if(arr[s]<=arr[h]){
                temp.push_back(arr[s]);
                s++;
            }
            else{
                temp.push_back(arr[h]);
                h++;
            }
        }
        while(s<=mid){
         temp.push_back(arr[s]);
         s++;
        }
        while(h<=right){
          temp.push_back(arr[h]);
          h++;
        }
        int k=0;
        for(int i=left;i<=right;i++){
          arr[i]=temp[k];
          k++;
        }
        return c;
    }
   long mergesort(vector<int>&arr,int l,int h){
    long c=0;
      if(l>=h)return c;
      int mid=(l+h)/2;
     c+=mergesort(arr,l,mid);
     c+= mergesort(arr,mid+1,h);
     c+=merge(arr,l,mid,h);
     return c;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
       return mergesort(nums,0,n-1);
    }
};