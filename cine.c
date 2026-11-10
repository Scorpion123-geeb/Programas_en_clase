# include <stdio.h>
int main (void){
    int a,b;
    printf("\n                        CINEEEDD\n\n");
    printf("Ingrese la edad de la persona:");
    scanf("%i",&a);
    printf("Ingrese la edad minima de la persona: ");
    scanf("%i",&b);
    if(a>=b){
        printf("\nPuede ingresara  la sala");
    }
    else{
        printf("\nLa persona no puede ingresar\n\n");

    }
    return 0;
    
}