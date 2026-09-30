class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        vector<int>h(3,-1);
       
        int n=s.length();
        for(int i=0;i<n;i++){
            h[s[i]-'a']=i;
            if(h[0]!=-1 && h[1]!=-1 && h[2]!=-1){
                count+=min({h[0],h[1],h[2]})+1;
            }


            
           
        }
        return count;

        
    }
};