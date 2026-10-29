class Solution {
public:
int helper(int index1,int index2,string &t1,string &t2,vector<vector<int>>&dp){
    if(index1<0 || index2<0){
        return 0;
    }
    if(dp[index1][index2]!=-1){
        return dp[index1][index2];
    }
    if(t1[index1]==t2[index2]){
        return 1+helper(index1-1,index2-1,t1,t2,dp);

    }
    return dp[index1][index2]=max(helper(index1-1,index2,t1,t2,dp),helper(index1,index2-1,t1,t2,dp));
}
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(m-1,n-1,text1,text2,dp);
        
    }
};