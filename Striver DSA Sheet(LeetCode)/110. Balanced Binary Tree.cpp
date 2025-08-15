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
pair<int,bool> helper(TreeNode* root){
    if(!root)return make_pair(0,true);
    auto left=helper(root->left);
    auto right=helper(root->right);

    int height=max(right.first,left.first)+1;
    bool balanced=right.second&&left.second&&abs(left.first-right.first)<=1?true:false;//check both branches to be balanced then the node itself;
   return make_pair(height,balanced); 
    
}

public:
    bool isBalanced(TreeNode* root) {
        pair<int,bool> ans=helper(root);
        return ans.second;       
    }
};