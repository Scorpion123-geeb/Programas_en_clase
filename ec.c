# include <stdio.h>
int main (void){
    int a,b,n;
    printf("\n\n   Aprendiendo a Contar con el GOLEM\n\n");
    printf("\n\nIngrese el numero con el que quiere comenzar: \n");
    scanf("%i",&a);
    printf("Ingrese el numero con el que quiere terminar: \n\n");
    scanf("%i",&b);
    
    n=a;
    while(n<=b){
        printf("%i\n",n);
        n++;
    }
    return 0;
}