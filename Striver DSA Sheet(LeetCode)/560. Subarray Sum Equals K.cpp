class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        map<int,int>mp;
        int sum=0;
        mp[0]=1;

        for(auto i:nums){
            sum=sum+i;
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
            
        }
    return cnt;}
};