#include <stdio.h>
 
int main() {
 
    int ang_horas, ang_minutos, horas, minutos, r;

    while (scanf ("%d %d",&ang_horas, &ang_minutos) != EOF)
    {
        horas = ang_horas/30;
        minutos = ang_minutos/6;
        printf("%02d:%02d\n", horas, minutos);
    }

 
    return 0;
}