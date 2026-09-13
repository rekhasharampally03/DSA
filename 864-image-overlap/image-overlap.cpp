class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img2.size();
        int overlaps=0;
        for(int rshift=-(n-1);rshift<=(n-1);rshift++){
            for(int cshift=-(n-1);cshift<=(n-1);cshift++){
                
                    int lap=0;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            int nrow=i+rshift;
                            int ncol=j+cshift;
                            if(nrow>=0 && nrow<n && ncol>=0 && ncol<n){
                                if(img2[nrow][ncol]==1 && img1[i][j]==1){
                                    lap++;
                                }


                            }
                        }
                    }
                    overlaps=max(lap,overlaps);

            }
        }
        return overlaps;

        
    }
};