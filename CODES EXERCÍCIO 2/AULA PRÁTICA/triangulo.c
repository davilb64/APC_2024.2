#include <stdio.h>
//função encontra o mínimo de dois valores
int min(int fatora, int fatorb){
    if (fatora > fatorb)
    {
        return(fatorb);
    }
    else{
        return(fatora);
    }
    
}
//função encontra o máximo de dois valores

int max(int fatora, int fatorb){
    if (fatora > fatorb)
    {
        return(fatora);
    }
    else{
        return(fatorb);
    }
    
}
 
int main() {
    int LadoA, LadoB, LadoC, A2, B2, C2, Maior, Menor, Medio;
    A2 = LadoA * LadoA;
    B2 = LadoB * LadoB;
    C2 = LadoC * LadoC;
    scanf ("%d %d %d",&LadoA, &LadoB, &LadoC);
    Maior = max(LadoA,max(LadoB,LadoB));
    Menor = min(LadoA,min(LadoB,LadoB));
    Medio = (LadoA + LadoB + LadoB) - (Maior + Menor);
    if (Maior >= (Medio + Menor))
    {
        printf("Invalido\n");
    }
    //equilatero
    else if (Maior == Menor && Menor == Medio)
    {
        printf("Valido-Equilatero\n");
    }
    //escaleno
    else if (Maior != Menor && Menor != Medio)
    {
        printf("Valido-Escaleno\n");
    }
    //isoceles
    else if (Maior == Menor && Menor != Medio)
    {
        printf("Valido-Isoceles\n");
    }
    //retalngulo
    if ((A2 = B2 + C2) || (B2 = C2 + A2) || (C2 = B2 + A2))
    {
        printf("Retangulo: S\n\n");
    }
    else
    {
        printf("Retangulo: N\n\n");
    }
    

    


    return 0;
}