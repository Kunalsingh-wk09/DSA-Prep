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
TreeNode* solve(int ins,int ine,int&post,vector<int> &inorder, vector<int> &postorder,map<int,int>&mp){
    if(post<0||ins>ine)return NULL;

    int el=postorder[post--];
    int in=mp[el];
    TreeNode*root=new TreeNode(el);
    root->right=solve(in+1,ine,post,inorder,postorder,mp);
    root->left=solve(ins,in-1,post,inorder,postorder,mp);
    return root;
}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int ine=inorder.size()-1;
        int ins=0;
        int post=postorder.size()-1;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode*ans=solve(ins,ine,post,inorder,postorder,mp);
        return ans;

        
    }
}; 