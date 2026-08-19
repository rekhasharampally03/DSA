class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans=2*n;
        unordered_map<int,set<int>>m;
        for(auto &i:reservedSeats){
            m[i[0]].insert(i[1]);
        }
    
        for(auto &[row,seats]:m){
            int f=0;
            bool a=seats.count(2)||seats.count(3);
            bool b=seats.count(4)||seats.count(5);
            bool c=seats.count(6)||seats.count(7);
            bool d=seats.count(8)||seats.count(9);
            if(!a && !b){
                f++;
            }
            if(!c && !d){
                f++;
            }
            if(f==0 &&!c && !b){
                f++;
            }
            ans-=2;
            ans+=f;
        }
        return ans;
    }

        
    
};