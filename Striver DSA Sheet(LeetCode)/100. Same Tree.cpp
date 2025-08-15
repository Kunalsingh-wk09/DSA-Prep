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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(q==NULL&&p==NULL)return true;
        if (p==nullptr||q==nullptr) return false;


        TreeNode*t1= p;
        TreeNode*t2= q; 
        if(t1->val!=t2->val) return false;
        return isSameTree(t1->left,t2->left)&&isSameTree(t1->right,t2->right);  
            
    }
};