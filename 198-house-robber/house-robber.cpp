class Solution {
public:
int compute(vector<int>&nums,int index,vector<int>&dp){
    if(index>=nums.size()){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    int take=nums[index]+compute(nums,index+2,dp);
    int nt=compute(nums,index+1,dp);

    
    return dp[index]=max(take,nt);


}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return compute(nums,0,dp);
        
    }
};