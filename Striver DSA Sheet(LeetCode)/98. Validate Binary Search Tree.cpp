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
bool solve(TreeNode*root,long long max,long long min){
    if(!root)return true;

    if(root->val>=max||root->val<=min) return false;

    bool left=solve(root->left,root->val,min);
    bool right=solve(root->right,max,root->val);
    return right&&left;
    
}
public:
    bool isValidBST(TreeNode* root) {
        return solve(root,LLONG_MAX,LLONG_MIN);
        
    }
};

//or



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
bool solve(TreeNode*root,long long max,long long min){
    if(!root)return true;

    if(root->val<max&&root->val>min){

    bool left=solve(root->left,root->val,min);
    bool right=solve(root->right,max,root->val);
    return right&&left;
    }
else return false;}
public:
    bool isValidBST(TreeNode* root) {
        return solve(root,LLONG_MAX,LLONG_MIN);
        
    }
};