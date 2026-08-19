class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        for(char i:s){
            m[i]++;

        }
        int len=0;
        bool odd=false;
        for(auto &i:m){
            if(i.second%2==0){
                len+=i.second;
            }else{
                len+=i.second-1;
                odd=true;
                
            }
        }
        if(odd){
            len++;
        }
         return len;
        

        
        
        
    }
};