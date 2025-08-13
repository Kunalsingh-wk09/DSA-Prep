class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows>1){ans.push_back({1,1});}
        for(int i=2;i<numRows;i++){
            vector<int>rows(i+1,1);
            for(int j=1;j<i;j++){
                rows[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(rows);
        }
   return ans; }
};