class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int j=0;
        int maxlen=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            while(m[nums[i]]>k){
                m[nums[j]]--;
                j++;
            }
            maxlen=max(i-j+1,maxlen);
        }
        return maxlen;
    
        
    }
};