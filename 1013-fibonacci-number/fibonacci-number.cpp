class Solution {
public:
    int fib(int n) {
        // int a=0;
        // int b=1;
        // int temp;
        // if(n==0){
        //     return a;
        // }
        // for(int i=1;i<n;i++){
        //     temp = b;
        //     b +=a;
        //     a=temp;

        // }

        // return b;

        if(n<=1){
            return n;
        }
        int last = fib(n-1);
        int sec_last = fib(n-2);

        return last+sec_last;
        
    }
};