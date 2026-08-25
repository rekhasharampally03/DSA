class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        int i=1;
        int result=k;
        while(k>0){
            if(m[result]==0){
                break;
            }
            result=k*i;
            i++;
        }
        return result;
        
    }
};