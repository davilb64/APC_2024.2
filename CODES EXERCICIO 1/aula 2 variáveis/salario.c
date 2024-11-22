#include <stdio.h>
 
int main() {
 
    double s, r, ns;
    scanf ("%lf",&s);
    if (s<=400)
    {
        r = (s*0.15);
        ns = s + r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n",ns,r);
    }
    if (s>400 && s<=800)
    {
        r = (s*0.12);
        ns = s + r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n",ns,r);
    }
    if (s>800 && s<=1200)
    {
        r = (s*0.10);
        ns = s + r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n",ns,r);
    }
    if (s>1200 && s<=2000)
    {
        r = (s*0.07);
        ns = s + r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n",ns,r);
    }
    if (s>2000)
    {
        r = (s*0.04);
        ns = s + r;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n",ns,r);
    }

    return 0;
}