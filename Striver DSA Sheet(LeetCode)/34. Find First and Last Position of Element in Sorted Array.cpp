class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        vector<int>res;
        

        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){ans=mid;
            e=mid-1;}
            if(nums[mid]<target)s=mid+1;
            if(nums[mid]>target)e=mid-1;

        }
        res.push_back(ans);
        s=0;
        e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){ans=mid;
            s=mid+1;}
            if(nums[mid]<target)s=mid+1;
            if(nums[mid]>target)e=mid-1;

        }
        res.push_back(ans);
        
    return res;
    }
};