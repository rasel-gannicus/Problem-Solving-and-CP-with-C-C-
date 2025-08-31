
#include <stdio.h>
#include <math.h>
    int main(){
        int a;
        scanf("%d", &a);
        if(a < pow(10, 3)){
            printf("%d\n",a);
        }
        else if(a>=pow(10,3) && a<=pow(10,4)){
            a = (a/10) * 10 ;
            printf("%d\n",a);
        }
        else if(a>=pow(10,4) && a<=pow(10,5)){
            a = (a/100) * 100 ;
            printf("%d\n",a);
        }
        else if(a>=pow(10,5) && a<=pow(10,6)){
            a = (a/1000) * 1000 ;
            printf("%d\n",a);
        }
        else if(a>=pow(10,6) && a<=pow(10,7)){
            a = (a/10000) * 10000 ;
            printf("%d\n",a);
        }
        else if(a>=pow(10,7) && a<=pow(10,8)){
            a = (a/100000) * 100000 ;
            printf("%d\n",a);
        }   
        else if(a>=pow(10,8) && a<=pow(10,9)){
            a = (a/1000000) * 1000000 ;
            printf("%d\n",a);
        }              
        return 0;
    }