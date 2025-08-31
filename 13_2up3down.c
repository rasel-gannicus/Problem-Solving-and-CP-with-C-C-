
#include <stdio.h>
    int main(){
        int a,b; 
        scanf("%d%d",&a,&b);
        if(a<b && b-a<=2){
            printf("Yes\n");
        }else if(a>b && a-b<=3){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        return 0;
    }

// alternate 
    int main(){
        int a,b; 
        scanf("%d%d",&a,&b);   
        if(a-b >= -2 && a-b <= 3 && a-b!=0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        return 0;
    }