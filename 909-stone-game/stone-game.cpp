class Solution {
public:
int t[501][501];
int solve(vector<int>&piles,int i,int j){
    if(i>j){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int tki=piles[i]+min(solve(piles,i+2,j),solve(piles,i+1,j-1));
    int tkj=piles[j]+min(solve(piles,i+1,j-1),solve(piles,i,j-2));
    
    return t[i][j]=max(tki,tkj);
}
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        memset(t, -1, sizeof(t));
        int sum=0;
        for(int i:piles){
            sum+=i;
        }
        int alice_score=solve(piles,0,n-1);

        return alice_score>sum/2;
        
    }
};