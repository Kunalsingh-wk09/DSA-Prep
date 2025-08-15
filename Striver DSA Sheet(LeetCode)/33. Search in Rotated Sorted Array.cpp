class Solution {
private:
int bsearch(vector<int>& nums, int target,int s, int e) {
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]<target)s=mid+1;
            if(nums[mid]>target)e=mid-1;

        }
        
    return -1;}
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        

        while(s<e){
            mid=s+(e-s)/2;
            if(nums[mid]>nums[e])s=mid+1;
            else e=mid;
                }
        int a=bsearch(nums,target,0,s-1);
        int b=bsearch(nums,target,s,nums.size()-1);

        if(a==-1)return b;
        if(b==-1)return a;
        
    return -1;}
};