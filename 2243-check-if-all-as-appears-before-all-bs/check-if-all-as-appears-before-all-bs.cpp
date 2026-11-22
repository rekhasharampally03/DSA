class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length()-1;i++){
            bool f=s[i]=='b'?true:false;
            if(f && s[i+1]=='a'){
                return false;
            }

        }
        return true;
    }

};