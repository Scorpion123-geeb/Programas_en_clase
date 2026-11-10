# include <stdio.h>
int main (void){
    int a,b;
    printf("\n¿Eres mayor de edad? \n");
    scanf("%i",&a);
    printf("\n¿Tienes tu INE? \n");
    scanf("%i",&b);
    if(a==1 && b==1){
        printf("\nPuedes Acceder\n");
    }
        else{
            printf("\nAcceso denegado\n");
        }
    return 0;
}