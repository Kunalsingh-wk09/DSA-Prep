class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int>x;
        map<int,int>y;
        int cx=matrix[0].size();
        int cy=matrix.size();
        for(int i=0;i<cy;i++){
            for(int j=0;j<cx;j++){
                if(matrix[i][j]==0){
                    x[j]++;
                    y[i]++;
                }
            }
        }
        for(int i=0;i<cy;i++){
            for(int j=0;j<cx;j++){
                if(x.find(j)!=x.end()){
                   matrix[i][j]=0;
                }
                if(y.find(i)!=y.end()){
                   matrix[i][j]=0;
                }
            }
        }
    }
};