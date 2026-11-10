# include <stdio.h>
int main (void){
    int a;
    printf("\nIngresa un numero positivo: ");
    scanf("%i",&a);
    if(a<0)
        printf("\nEl nuemero es negativo y no es valido\n");
    else
        if(a<=20)
            printf("\nZona 1\n");
            else
                if(a<=40)
                 printf("\nZona 2\n");
                    else
                        if(a>40)
                            printf("\nZona3\n");
    return 0;
}