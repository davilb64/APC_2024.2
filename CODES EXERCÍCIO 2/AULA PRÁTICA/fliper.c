#include <stdio.h>
 
int main() {
 
    int PortaSuperior, PortaInferior;
    scanf("%d %d",&PortaSuperior, &PortaInferior);
    if (PortaSuperior == 0)
    {
        printf("C\n");
    }
    else
    {
        if (PortaInferior == 0)
        {
            printf("B\n");
        }
        else
        {
            printf("A\n");
        }
        
    }
    return 0;
}