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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)return v;
        queue<TreeNode*>q;
        q.push(root);
        int LTR=1;
        while(!q.empty()){
            vector<int>v1;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);  
            }
            if(!LTR)reverse(v1.begin(),v1.end());
            v.push_back(v1);
            LTR=(!LTR);
        }
        
    return v;}
};