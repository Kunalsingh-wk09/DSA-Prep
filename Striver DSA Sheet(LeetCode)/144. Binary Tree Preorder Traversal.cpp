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
    void helper(TreeNode*root,vector<int>&val){
        if(!root)return;
        val.push_back(root->val);
        helper(root->left,val);
        helper(root->right,val);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>val;
        helper(root,val);
        return val;
        
    }
};