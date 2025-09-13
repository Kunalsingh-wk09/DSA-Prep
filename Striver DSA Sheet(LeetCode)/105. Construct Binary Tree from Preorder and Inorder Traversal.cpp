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

TreeNode*solve(int &pre,int ins,int ine,vector<int>preorder,vector<int>inorder,int n,map<int,int>&mp){
    if(pre>n||ins>ine)return NULL;
    int el=preorder[pre++];
    TreeNode*root=new TreeNode(el);
    int in=mp[el];;
    root->left=solve(pre,ins,in-1,preorder,inorder,n,mp);
    root->right=solve(pre,in+1,ine,preorder,inorder,n,mp);
    return root;
}
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre=0;
        int ins=0;
        int ine=inorder.size()-1;
        int n = preorder.size()-1;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
        mp[inorder[i]]=i;
    }
        TreeNode*ans=solve(pre,ins,ine,preorder,inorder,n,mp);
        return ans;    
    }
};