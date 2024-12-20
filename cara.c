#include <stdio.h>
 
int main() {
    int ValorN, ValorJogo, Mary, Jonh;
    while (ValorN != 0)
    {
        Mary = 0;
        Jonh = 0;
        scanf ("%d",&ValorN);
        if (ValorN == 0)
        {
            return 0;
        }
        else
        {
            for (int i = 0; i < ValorN; i++)
            {
                scanf("%d", &ValorJogo);
                if (ValorJogo == 0)
                {
                    Mary++;
                } 
                else
                {
                    Jonh++;
                }   
            }
        printf("Mary won %d times and John won %d times\n", Mary, Jonh);
        }
        
    }
return 0;
}