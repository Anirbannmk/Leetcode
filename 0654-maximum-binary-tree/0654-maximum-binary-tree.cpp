/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int m(vector<int>v,int s,int e){
    int l=v[s];
    int index=s;
    for(int i=s;i<=e;i++){
        if(v[i]>l){
            l=v[i];
            index=i;
        }
    }
    return index;
}
    TreeNode* creat(vector<int>v,int s,int e){
        if(s>e) return NULL;
        if(s==e) return new TreeNode (v[s]);
        int index=m(v,s,e);
        TreeNode* root=new TreeNode(v[index]);
        root->left=creat(v,s,index-1);
        root->right=creat(v,index+1,e);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
      return  creat(nums,0,nums.size()-1);
    }
};