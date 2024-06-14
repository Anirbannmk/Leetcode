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
int result=0;
int check(TreeNode* root){
    int l=(root->left)?check(root->left):0;
    int r=(root->right)?check(root->right):0;
    result+=abs(r-l);
    return r+l+root->val;
}
    int findTilt(TreeNode* root) {
     if(root==NULL)return 0;
      check(root);
      return result;  
    }
};