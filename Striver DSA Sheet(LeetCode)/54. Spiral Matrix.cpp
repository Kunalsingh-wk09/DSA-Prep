class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int right=matrix[0].size()-1;
        int left=0;
        int top=0;
        int bottom=matrix.size()-1;
        vector<int>ans;
        int count=0;
        int total =(right+1)*(bottom+1);

        while(count<total){
            for(int i=left;count < total &&i<=right;i++){
                ans.push_back(matrix[top][i]);
                count++;
                 
            }
            top++;
            for(int i=top;count < total &&i<=bottom;i++){
                ans.push_back(matrix[i][right]);
                count++;
                 
            }
            right--;
            for(int i=right;count < total &&i>=left;i--){
                ans.push_back(matrix[bottom][i]);
                count++;
                
            }
            bottom--; 
            for(int i=bottom;count < total &&i>=top;i--){
                ans.push_back(matrix[i][left]);
                count++;
                
            }
            left++; 
        }
        
    return ans;}
};