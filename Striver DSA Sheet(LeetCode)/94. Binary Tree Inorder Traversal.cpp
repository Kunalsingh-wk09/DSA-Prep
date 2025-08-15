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
private:
void inorder(TreeNode*root,vector<int>&vall){
        if(!root) return;
        inorder(root->left,vall);
        vall.push_back(root->val);
        inorder(root->right,vall);}

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vall;
        inorder(root,vall);        
        return vall;
    }
};