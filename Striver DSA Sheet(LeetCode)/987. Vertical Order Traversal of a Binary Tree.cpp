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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int> > > m;
        queue<pair<TreeNode*,pair<int,int> > > q;
        vector<vector<int>> ans;

        if(!root)return ans;
        q.push(make_pair(root,make_pair(0,0)));

        while(!q.empty()){
        pair<TreeNode*,pair<int,int> > t=q.front();
        q.pop();

        TreeNode* temp=t.first;
        int hd= t.second.first;
        int lvl=t.second.second;

        m[hd][lvl].insert(temp->val);

        if(temp->left)q.push(make_pair(temp->left,make_pair(hd-1,lvl+1)));
        if(temp->right)q.push(make_pair(temp->right,make_pair(hd+1,lvl+1)));
        }
        for(auto i:m){
            vector<int>v;
            for(auto j:i.second){
                for(auto k:j.second){
                     v.push_back(k);
                     
                }
               
            }
          ans.push_back(v);  
        }

       return ans; 
    }
};