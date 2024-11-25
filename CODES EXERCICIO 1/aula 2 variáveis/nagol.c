#include <stdio.h>
 
int main() {
 
    int l,c,x,y;
    scanf("%d%d%d%d",&l,&c,&x,&y);
    if(c % 2 == 0){
        if(y % 2 == 0){
            printf("Direita\n");
        }
        else{
            printf("Esquerda\n");
        }
    }
    else{
        if((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)){
            printf("Direita\n"); 
        }
        else{
            printf("Esquerda\n");
        }
    }
    
    return 0;
}
