#include <stdio.h>
 
int main() {
    int Xsuperior, Ysuperior, Xinferior, Yinferior, TestCount, QuantMeteoros, XMeteoro, YMeteoro, MeteorosDrento;
    Xinferior = 1;
    Xsuperior = 1;
    Yinferior = 1;
    Ysuperior = 1;
    TestCount = 1;
    scanf("%d %d %d %d",&Xsuperior, &Xinferior, &Ysuperior, &Yinferior);
    while (Xsuperior != 0 || Ysuperior != 0 || Xinferior != 0 || Yinferior != 0)
    {
        MeteorosDrento = 0;
        scanf("%d",&QuantMeteoros);
        printf("Teste %d\n",TestCount);
        for (int i = 0; i < QuantMeteoros; i++)
        {
            scanf("%d %d",&XMeteoro,&YMeteoro);
            if (XMeteoro >= Xinferior && XMeteoro <= Xsuperior && YMeteoro >= Yinferior && YMeteoro <= Ysuperior)
            {
                MeteorosDrento++;
            }
            else{
                MeteorosDrento = MeteorosDrento;
            }
            
        }
        printf("%d\n",MeteorosDrento);
        TestCount++;
        scanf("%d %d %d %d",&Xsuperior, &Xinferior, &Ysuperior, &Yinferior);
    }

    return 0;
    
    
    

    
 
    
}