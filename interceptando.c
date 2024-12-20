#include <stdio.h>
 
int main() {
    int N1,i,tof;
    tof = 0;
    for (i = 1; i <= 8; i++)
    {
        scanf("%d", &N1);
        if (N1 == 9)
        {
            tof+=1;
        }   
    }
    if (tof == 0)
    {
        printf("S\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}