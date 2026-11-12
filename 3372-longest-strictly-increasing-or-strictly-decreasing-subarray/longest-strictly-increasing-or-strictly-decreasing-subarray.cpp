class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int maxlen=INT_MIN;
        int len1=1;
        int len2=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                len1++;
                len2=1;
            }else if(nums[i-1]>nums[i]){
                len2++;
                len1=1;
            }else{
                len1=1;
                len2=1;
            }
            maxlen=max({maxlen,len1,len2});
        }
        return maxlen;

    }
};