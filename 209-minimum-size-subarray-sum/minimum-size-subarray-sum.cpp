class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int minlen=INT_MAX;
        int sum=0;
        while(l<nums.size()){
            sum+=nums[l];
            while(sum>=target){
                minlen=min(minlen,l-r+1);
                sum-=nums[r];
                r++;
                
            }

            l++;

        }
        return minlen==INT_MAX?0:minlen;
        
    }
};