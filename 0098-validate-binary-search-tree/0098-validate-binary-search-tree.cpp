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
bool check(TreeNode* root,TreeNode* left=NULL,TreeNode* right=NULL){
   if(root==NULL)return 1;
   if(left!=NULL&&left->val>=root->val) return 0;
   if(right!=NULL&&right->val<=root->val) return 0;
    return check(root->left,left,root)&&check(root->right,root,right);
}
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        return check(root);
    }
};