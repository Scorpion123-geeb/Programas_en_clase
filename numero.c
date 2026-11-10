# include <stdio.h>
int main (void){
    int a;
    printf("Ingrese el numero:");
    scanf("%i",&a);
    if(a>10){
        printf("%i",a);
    }
    else{
        printf("El numero no es mayor a 10");

    }
    return 0;
    

}