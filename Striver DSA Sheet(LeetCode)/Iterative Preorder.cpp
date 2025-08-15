/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
		vector<int> preorder(TreeNode* root){
	      vector<int>v;
          if(root==NULL)return v;
          stack<TreeNode*>st;
          st.push(root);
          while(!st.empty()){
            TreeNode*temp=st.top();
            st.pop();
            v.push_back(temp->data);
            if(temp->right)st.push(temp->right); //switch the order u wanna go as the one u push first will be processed last
            if(temp->left)st.push(temp->left);
          }
		return v;}
};