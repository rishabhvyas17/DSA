class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;


        int first = tribonacci(n-1) ;
        int sec = tribonacci(n-2) ;
        int third = tribonacci(n-3);

        return first + sec + third;
    }
};