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
    int l(TreeNode* root){
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return 1;
        return l(root->left)+l(root->right);

    }
    int nl(TreeNode* root){
       if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return 0;
        return 1+nl(root->left)+nl(root->right); 
    }
    int countNodes(TreeNode* root) {
        return l(root)+nl(root);
    }
};