class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int left=0;
        long long sum=0;
        int res=0;
        sort(nums.begin(),nums.end());
        for(int right=0;right<nums.size();right++){
            sum=sum+nums[right];
            while(((long long)nums[right]*(right-left+1)-sum)>k){
                sum=sum-nums[left];
                left++;}
                res=max(res,right-left+1);
            
        }
        return res;
    }
};