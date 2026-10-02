class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int l=0;
        int r=0;
        int n=nums.size();
        long long count=0;
        long long sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum*(r-l+1)>=k){
                sum-=nums[l];
                l++;

            }
            count+=r-l+1;
            r++;


        }
        return count;
        
    }
};