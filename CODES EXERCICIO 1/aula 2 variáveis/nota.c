#include <stdio.h>
 
int main() {
 
    int b,t,base_superior,base_inferior,lado_esq;
    scanf("%d\n%d",&b,&t);
    base_superior = 160 - t;
    base_inferior = 160 - b;
    lado_esq = ((base_inferior+base_superior)*70)/2;
    if (lado_esq>5600)
    {
        printf("2\n");
    }
    else if(lado_esq<5600)
    {
        printf("1\n");
    }
    else
    {   
        printf("0\n");
    }
    
    
    return 0;
}