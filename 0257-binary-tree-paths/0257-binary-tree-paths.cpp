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
void path(TreeNode* root,vector<int>&v,vector<string>&v1){
    if(root==NULL)return;
    v.push_back(root->val);
    if(root->left==NULL&&root->right==NULL){
        string s;
        int i;
        for(i=0;i<v.size()-1;i++){
            s+=to_string(v[i]);
            s+="->";
        }
        s+=to_string(v[i]);
        v1.push_back(s);
    }
    path(root->left,v,v1);
    path(root->right,v,v1);
    v.pop_back();


}
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<int>v;
       vector<string>v1;
       path(root,v,v1);
       return v1; 
    }
};