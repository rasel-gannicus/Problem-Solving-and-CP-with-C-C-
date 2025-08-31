
#include <stdio.h>
    int main(){
        long long a,b,k;
        scanf("%lld%lld%lld",&a, &b, &k);
        if(k<=a){
            a = a-k;
        }else if(k>=a+b){
            a = 0;
            b = 0;
        }else{
            b = (a+b) - k;
            a = 0;
        }
        printf("%lld %lld\n",a, b);
        return 0;
    }