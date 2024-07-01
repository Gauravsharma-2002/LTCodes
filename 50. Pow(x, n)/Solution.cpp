class Solution {
public:
    double positivePow(double x,int n){
        if(n==0) return 1;
        double temp = positivePow(x,n/2);
        if(n%2==0) return temp*temp;
        else return x*temp*temp;
    }
    double negativePow(double x,int n){
        if(n==-1) return 1/x;
        double temp = negativePow(x,n/2);
        if(n%2==0 ) return temp*temp;
        else return (1/x)*temp*temp;
    }
    double myPow(double x, int n) {
        // double  ans = INT_MAX;
           if(n>=0){
            return  positivePow(x,n);
       }
       else 
       return negativePow(x,n);
    }
};