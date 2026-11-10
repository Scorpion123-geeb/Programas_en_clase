# include <stdio.h>
# include <math.h>
int main (void){
    int a,c;
    long int b,d;
    printf("\nIngrese el numero que quieres conocer su potencia: ");
    scanf("%i",&a);
    b=pow(a,10);
    printf("\nla potencia es:%li",b);
    printf("\nIngrese el numero que quiere conocer la raiz: ");
    scanf("%i",&c);
    d=sart(c,2);
    printf("\nEl resultado de la raiz es: %li",d);
    return 0;

}