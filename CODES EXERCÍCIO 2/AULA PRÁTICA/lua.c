#include <stdio.h>
 
int main() {
    
    int Dia1, Dia2;
    scanf("%d %d", &Dia1, &Dia2);
    if (Dia2 > Dia1)
    {
        //crescendo
       if (Dia2 > 96)
       {
        printf("cheia\n");
       }
       else if (Dia2 < 3)
       {
        printf("nova\n");
       }
       else
       {
        printf("crescente\n");
       }    
       
    }
    else
    {
        //minguante
       if (Dia2 > 96)
       {
        printf("cheia\n");
       }
       else if (Dia2 < 3)
       {
        printf("nova\n");
       }
       else
       {
        printf("minguante\n");
       }  
    }
    

    
    return 0;
}