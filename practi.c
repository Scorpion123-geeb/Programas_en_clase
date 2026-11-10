# include <stdio.h>
int main(void){
    int a,b;
    printf("El Cine\n");
    printf("\nIngrese la edad del cliente: ");
    scanf("%i",&a);
    printf("\nIngrese la edad minima para acceder: ");
    scanf("%i",&b);
    if(a>=b){
        printf("\nPuede ingresar a la sala\n");
    }
    else{
        printf("\nNo puede ingresar a la sala\n");
    }
    return 0;
    
}