   int mySqrt(int x) {
        long long r;
        for(long long n=0;n<=x;n++){
            if(n*n<x){
                continue;
            }
            else if(n*n>x){
                r= n-1;
                break;
            }
            else{
                r=n;
                break;
            }
        }
        return r;
    }
