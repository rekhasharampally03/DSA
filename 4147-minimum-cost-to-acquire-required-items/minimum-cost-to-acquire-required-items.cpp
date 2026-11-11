class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
       long long op1=1LL*cost1*need1+1LL*cost2*need2;
       long long common=min(need1,need2);
       long long op2=1LL*common*costBoth+1LL*(need1-common)*cost1+1LL*(need2-common)*cost2*1LL;
       long long op3=1LL*max(need1,need2)*costBoth;
       return min({op1,op2,op3});
    

    }
};