
#include <stdio.h>
#include <math.h>

    int main(){
        int a,b ;
        scanf("%d%d", &a, &b) ;
        int ab = (int)pow(a,b) ;
        int ba = (int)pow(b,a) ;
        printf("%d\n", ab + ba);

        return 0;
    }