#include <stdio.h>
 
int main() {
 
    int ValorN, Valor, i, Min, Max, Out, In;
    Out = 0;
    In = 0;
    Min = 10;
    Max = 20;
    scanf("%d", &ValorN);
    for (i = 0; i < ValorN; i++)
    {
        scanf("%d", &Valor);
        if (Valor >= Min && Valor <= Max)
        {
            In++;
        }
        else
        {
            Out++;
        }  
    }
    printf("%d in\n%d out\n", In, Out);
    
 
    return 0;
}