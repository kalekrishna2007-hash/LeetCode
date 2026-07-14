class Solution {
public:
    bool isPalindrome(int x) {
        long rev =0;
        int n = x;
        if(n<0){
            return false;
        }
        while(x!=0){
            int reminder = x%10;
            rev =  rev*10 + reminder;
            x= x/10;
             }
        if(n==rev){
            return true;
        }
        else{
            return false;
        }
        
    }
};