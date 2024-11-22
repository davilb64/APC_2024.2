#include <stdio.h>
 
int main() {
 
    int casas,sobra,branca,preta;
    scanf("%d",&casas);
    sobra = casas%2;
    
    if (sobra == 0)
    {
        branca = (casas/2)*casas;
        preta = (casas/2)*casas;
        printf("%d casas brancas e %d casas pretas\n",branca,preta);
    }
    else{
        preta = ((casas - 1)/2)*(casas - 1) + casas - 1;
        branca = preta + 1;
        printf("%d casas brancas e %d casas pretas\n",branca,preta);
    }
    
 
    return 0;
}