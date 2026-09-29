class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        int n=fruits.size();
        int maxlen=0;
        unordered_map<int,int>m;
        while(r<n){
            m[fruits[r]]++;
            if(m.size()>2){
                m[fruits[l]]--;
                if(m[fruits[l]]==0){
                    m.erase(fruits[l]);
                }
                l++;
                
            }
            if(m.size()<=2){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
        
    }
};