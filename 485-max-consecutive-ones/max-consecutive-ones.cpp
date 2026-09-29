class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int r=0;
        int n=nums.size();
        
        int maxlen=INT_MIN;
        while(r<n){
            if(nums[r]==0){
                l=r+1;
            }
            
            
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
        
    }
};