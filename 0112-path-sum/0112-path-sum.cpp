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
int c=0;
    void check(TreeNode* root,vector<TreeNode*>&v,int &sum){
        if(root==NULL) return;
        v.push_back(root);
        if(root->left==NULL&&root->right==NULL){
            int s=0;
            for(auto ele:v){
                s+=ele->val;
            }
            if(s==sum){
                c=1;
            }
        }
        check(root->left,v,sum);
        check(root->right,v,sum);
        v.pop_back();
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<TreeNode*>v;
        check(root,v,targetSum);
        if(c==1)return 1;
        else return 0;
    }
};