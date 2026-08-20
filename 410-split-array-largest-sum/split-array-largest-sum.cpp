class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int sum=0;
        int temp=0;
        for(int i: nums){
            sum+=i;
            maxi=max(maxi,i);
        }
        int l=maxi;
        int h=sum;
        
        while(l<h){
            int mid=l+(h-l)/2;
            temp=0;
            int count=1;
            for(int i:nums){
                if(temp+i<=mid){
                    temp+=i;
                    
                }else{
                    count++;
                    temp=i;
                }
            }
            if(count<=k){
                h=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
        
    }
};