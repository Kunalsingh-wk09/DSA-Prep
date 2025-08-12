class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int negindex=1;
        int posindex=0;

        for(auto a:nums){
            if(a>0){
                ans[posindex]=a;
                posindex+=2;
            }
            else{
                ans[negindex]=a;
                negindex+=2;

            }
        }
    return ans;}
};