#include <stdio.h>
 
int main() {
 
    int p,s,t,q,quin;
    scanf("%d%d%d%d%d",&p,&s,&t,&q,&quin);
    if (p>s)
    {
        if (s>t)
        {
            if (t>q)
            {
                if (q>quin)
                {
                    printf("D\n");
                }
                else{
                    printf("N\n");
                }
                
            }
            else{
                printf("N\n");
            }            
        }
        else{
            printf("N\n");
        }
        
    }
    else
    {
        if (s<t)
        {
            if (t<q)
            {
                if (q<quin)
                {
                    printf("C\n");
                }
                else{
                    printf("N\n");
                }
                
            }
            else{
                printf("N\n");
            }
            
        }
        else{
            printf("N\n");
        }
        
    }
    

    return 0;
}