# include <stdio.h>
int main(void){
    int n=0,a,e,eT=0;
    printf("Ingrese la cantidad de personas: ");
    scanf("%i",&a);
    while(++n<=a){
        printf("Ingrese la estatura de la persona %i: ",n);
        scanf("%i",&e);
        eT+=e;
    }
    printf("\nEl promedio de estatura es: %i\n",eT/a);
    return 0;
}