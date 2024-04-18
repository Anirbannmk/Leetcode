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
void rv(TreeNode* root,int level,vector<int>&vec){
    if(root==NULL){
        return ;
    }
if(level==vec.size()){
    vec.push_back(root->val);
}
rv(root->right,level+1,vec);
rv(root->left,level+1,vec);
}
    vector<int> rightSideView(TreeNode* root) {
        int l=0;
        vector<int>v;
        rv(root,l,v);
         return v;
             }
};