
#include <stdio.h>
    int main(){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z) ; 
        int a,b,c;
        if(x<y && x<z){
            a = x;
        }else if(y<x && y<z){
            a = y;
        }else {
            a = z;
        }

        if(x>y && x>z){
            c = x;
        }else if(y>x && y>z){
            c = y;
        }else {
            c = z;
        }

        if(x>y && x<z){
            b = x;
        }else if(x<y && x>z){
            b = x;
        }else if(y>x && y<z){
            b = y;
        }else if(y<x && y>z){
            b = y;
        }
        else {
            b = z;
        }
        
        printf("%d %d %d \n", a, b, c);

        return 0;
    }