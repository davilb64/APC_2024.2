#include <stdio.h>
int main() {
    char Casa1, Casa2, Casa3;
    scanf("%c%c%c",&Casa1,&Casa2,&Casa3);
    if (Casa1 == 'X' && Casa2 == 'O' && Casa3 == 'X')
    {
        printf("*\n");
    }
    else if (Casa1 == 'X' && Casa2 == 'X' && Casa3 == 'O')
    {
        printf("Alice\n");
    }
    else if (Casa1 == 'O' && Casa2 == 'X' && Casa3 == 'X')
    {
        printf("Alice\n");
    }
    else
    {
        printf("?\n");
    }
    
    
    

    return 0;
}