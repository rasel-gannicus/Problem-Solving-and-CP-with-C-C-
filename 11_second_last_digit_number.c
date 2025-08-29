

#include <stdio.h>
    int main(){
        int a ;
        scanf("%d", &a);
        int b = a / 10 ;
        int first_b = b; 
        b = b / 10 ; 
        int c = b * 10 ; 
        
        int final_number = first_b - c ; 
        printf("%d\n",final_number);
        return 0 ;
    }