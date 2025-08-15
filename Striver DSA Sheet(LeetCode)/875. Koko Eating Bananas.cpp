class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
    
        for(int i=0;i<piles.size();i++){
           maxi = max(piles[i],maxi);
        
        }
        int s=1;
        int e=maxi;
        

        while(s<e){
            int mid=s+(e-s)/2;
            long long hours=0;
            for(auto p:piles){
                hours+=(p+mid-1)/mid;
            }
            if(hours>h)s=mid+1;
            else e=mid;
        }
    
    return s;}
};