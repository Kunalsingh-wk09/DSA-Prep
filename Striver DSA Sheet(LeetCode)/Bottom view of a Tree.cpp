/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
       vector<int>ans;
       map<int,int>m;
       queue<pair<Node*,int>>q;
       q.push(make_pair(root,0));
       
       while(!q.empty()){
           pair<Node*,int>temp=q.front();
           q.pop();
           int hd=temp.second;
           m[hd]=temp.first->data;
           if(temp.first->left)q.push(make_pair(temp.first->left,hd-1));
           if(temp.first->right)q.push(make_pair(temp.first->right,hd+1));
       }
       for(auto i:m){
           ans.push_back(i.second);
       }
    return ans;}
};