class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int temp;
        if(n==0){
            return a;
        }
        for(int i=1;i<n;i++){
            temp = b;
            b +=a;
            a=temp;

        }

        return b;
        
    }
};