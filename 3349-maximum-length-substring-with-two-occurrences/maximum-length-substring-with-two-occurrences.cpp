class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        vector<int>v(26,0);
        int maxlen=0;
        for(int r=0;r<s.length();r++){
            v[s[r]-'a']++;
            while(v[s[r]-'a']>2){
                
                v[s[l]-'a']--;
                l++;

            }
            maxlen=max(maxlen,r-l+1);



        }
        return maxlen;
        
    }
};