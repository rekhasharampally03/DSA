class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minidx=0;
        int maxidx=0;
        for(int i=0;i<n;i++){
            if(nums[maxidx]<nums[i]){
                maxidx=i;;
            }
            if(nums[minidx]>nums[i]){
                minidx=i;
            }
        }
        int left=max(maxidx,minidx)+1;
        int right=n-min(maxidx,minidx);
        int both=min(maxidx,minidx)+1+n-max(maxidx,minidx);
        return min({left,right,both});
        
        
        
    }
};