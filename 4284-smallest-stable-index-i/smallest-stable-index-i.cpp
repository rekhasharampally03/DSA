class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        
        int n=nums.size();
        int idx=-1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                mini=min(mini,nums[j]);

            }
            
            
            if(maxi-mini<=k){
                idx=i;
                break;
           
                

            }
        }
        return idx;

        
    }
};