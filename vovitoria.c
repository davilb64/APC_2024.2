#include <stdio.h>
 
int main() {
    int Depositos, DepositosCont, CofreJ, CofreZ, CofreJCont, CofreZCont, Dif, Depositosprint;
    
    Depositosprint = 0;

    scanf("%d",&Depositos);
    while (Depositos != 0)
    {
        CofreJCont = 0;
        CofreZCont = 0;
        Depositosprint++;
        DepositosCont = 0;

        printf("Teste %d\n",Depositosprint);

        while (DepositosCont < Depositos)
        {
            DepositosCont++;
            scanf("%d %d", &CofreJ, &CofreZ);
            CofreJCont = CofreJCont + CofreJ;
            CofreZCont = CofreZ + CofreZCont;
            Dif = CofreJCont - CofreZCont;
            printf("%d\n",Dif);

        }
        printf("\n");
        scanf("%d",&Depositos);
        
    }
    
     

 
    return 0;
}