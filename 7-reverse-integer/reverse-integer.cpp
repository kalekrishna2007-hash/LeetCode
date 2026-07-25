class Solution {
public:
    int reverse(int x) {

        int revx = 0;
        while(x!=0){
            int digit = x%10;
            x = x/10;
            if(revx > INT_MAX/10 || revx == INT_MAX && digit>7 ){
                return 0;
            }
            if(revx < INT_MIN/10 || revx == INT_MIN && digit<-8 ){
                return 0;

            }
            revx = revx*10+digit;
        }
         return revx;
        
    }
};