# include <stdio.h>
int main (void){
    int a,n,aT=0;
    printf("\nIngrese un nemero: ");
    scanf("%i",&a);
    n=a;
    printf("\n\nSuma de todos los numeros de 0 a %i lleva el siguiente orden:\n\n",a);
    while(n>=1){
        aT+=n;
        printf("%i + ",n);
        n-=1;
    }
    printf("\n\nEl resultado de la suma es = %i\n\n",aT);
    return 0;
}