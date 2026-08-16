class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
    
        int n=nums.size();
        
       
        int t=0;
        for(int r=0;r<n;r++){
            t^=nums[r];
        }
        if(t!=0){
            return n;
        }
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans=n-1;
                break;

            }else{
                ans=0;
            }
        }
        return ans;
       



        
    }
};