class Solution {
private:
void merges(vector<int>&nums,int s, int e){
    if(s>=e)return;
    int mid= s+(e-s)/2;
    merges(nums,s,mid);
    merges(nums,mid+1,e);
    merge(nums,s,e);
}
void merge(vector<int>&nums,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int*first=new int[len1];
    int*second=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++) first[i]=nums[k++];
    k=mid+1;
    for(int i=0;i<len2;i++) second[i]=nums[k++];
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2])nums[k++]=first[index1++];
        else nums[k++]=second[index2++];
    }
    while(index1<len1)nums[k++]=first[index1++];
    while(index2<len2)nums[k++]=first[index2++];
}
public:
    vector<int> mergeSort(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        merges(nums,s,e);
        return nums;
    }
};
