class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int m=0;
        while(m<=e){
            switch(nums[m]){
            case 0: swap(nums[s++],nums[m++]);
                    break;
            case 1: m++;
                    break;
            case 2: swap(nums[m],nums[e--]);
                    break;
            }
        }         
    }
};