#include <stdio.h>
 
int main() {
 
    int ValorInicial, ValorFinal, PontaInicial, PontaFinal, Total;

    scanf("%d\n%d",&ValorFinal,&ValorInicial);
    if (ValorFinal == ValorInicial)
    {
        printf("0\n");
    }
    else
    {
        PontaFinal = ValorFinal - 1;
        PontaInicial = ValorInicial + 1;

        if (PontaFinal % 2 != 0)
        {
            PontaFinal = PontaFinal;
        }
        else
        {
            PontaFinal = PontaFinal - 1;
        }

        if (PontaInicial % 2 != 0)
        {
            PontaInicial = PontaInicial;
        }
        else
        {
            PontaInicial = PontaInicial + 1;
        }

        Total = PontaInicial;
        
        while (PontaInicial != PontaFinal)
        {
            PontaInicial = PontaInicial + 2;
            Total = Total + PontaInicial;
        }
        
        printf("%d\n",Total);
    }
    
    return 0;
}