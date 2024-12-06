#include <stdio.h>
 
int main() {
    int ano, sec, div;

    while (scanf("%d",&ano) != EOF){
        div = ano%100;
        if (div == 0)
        {
            sec = ano/100;
        }
        else
        {
            sec = (ano/100) + 1;
        }
        printf("%d\n", sec);
    }

 
    return 0;
}