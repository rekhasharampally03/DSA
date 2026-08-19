class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int water=0;

        while(l<r){
            
            if(height[l]<height[r]){
                water=max(height[l]*(r-l),water);
                l++;
            }else{
                water=max(height[r]*(r-l),water);
                r--;
            }


        }
        return water;
        
    }
};