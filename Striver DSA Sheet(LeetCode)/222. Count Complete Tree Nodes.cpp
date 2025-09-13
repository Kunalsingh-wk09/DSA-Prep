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
    void help(TreeNode* root, int &cnt){
        if(root==NULL) return;
        cnt++;
        help(root->left,cnt);
        help(root->right,cnt);
    }
public:
    int countNodes(TreeNode* root) {
        int cnt=0;
        help(root,cnt);
        return cnt;

        
    }
};