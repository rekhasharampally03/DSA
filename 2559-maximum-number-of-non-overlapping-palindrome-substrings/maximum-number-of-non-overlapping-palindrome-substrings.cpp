class Solution {
public:
bool palindrome(string s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
    int maxPalindromes(string s, int k) {
        int count=0;
        int i=0;

        while(i+k<=s.length()){
            string s1=s.substr(i,k);
            if(palindrome(s1)){
                count++;
                i=i+k;
            }else if(i+k+1<=s.length()&& palindrome(s.substr(i,k+1))){
                count++;
                i=i+k+1;
            }else{
                i++;
            }
            

        }

       return count;
        
        
    }
};