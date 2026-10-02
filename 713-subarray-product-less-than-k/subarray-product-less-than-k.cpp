class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int l=0;
        int r=0;
        int n=nums.size();
        int count=0;
        long sum=1;
        while(r<n){
            sum*=nums[r];
            while(sum>=k){
                sum/=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
        
    }
};