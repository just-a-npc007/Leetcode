    int reverse(int x) {
        long long u=0;
        if(x<0){
            long long c=llabs(x);
            while(c>0){
                int r=c%10;
                c=c/10;
                u=10*u+r;
            }
            if(u>=2147483647 || u<-2147483647){
            return 0;
            }
            else{return -u;
            }
        }
        else{
             while(x>0){
               int r=x%10;
                x=x/10;
                u=10*u+r;
            }
             if(u>=2147483647 || u<-2147483647){
            return 0;
            }
            else{return u;
            }
        }
    }
