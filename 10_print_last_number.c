
// with modulo % operator
// ------------
// #include <stdio.h>
//     int main(){
//         int a;
//         scanf("%d",&a);
//         printf("%d\n", a%10);
//         return 0;
//     }


// without modulo % operator 

#include <stdio.h>
    int main(){
        int a ;
        scanf("%d", &a);
        int b = a / 10 ;
        b = b * 10 ;
        printf("%d\n", a - b);
        return 0; 
    }