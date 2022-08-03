#include <stdio.h>
#include <stdlib.h>

void main(){
    int NB1, NB2;
    char op, q;
    printf("entrer le nombre 1: ");
    scanf("%d", &NB1);
    printf("entrer l'operateur: ");
    scanf("%s", &op);
    printf("entrer le nombre 2: ");
    scanf("%d", &NB2);
    
    switch (op)
    {
         
        case '+': printf("%d\n", NB1+NB2);
            break;
        case '-': printf("%d\n",NB1-NB2);
            break;
        case '*': printf("%d\n",NB1*NB2);
            break;
        case '/': if(NB2!=0)
            printf ("%d\n",NB1/NB2);
        else
            printf("impossible");
            break;
        default:
            printf("operation non reconnue");
            break;
        case 'q':
            printf("arreter le programme");
            break;
    }

}
