# include <stdio.h>
int main(void){
    int a, b, s,r,m;
    float d;
    printf("\n             OPERACIONES BASICAS\n\n");
    printf("\nIngresa un numero: ");
    scanf("%i", &a);
    printf("\nIngresa el segundo numero: ");
    scanf("%i", &b);
    s=a+b;
    printf("\nEl resultado de la suma es: %i\n",s);
    r=a-b;
    printf("\nEl resultado de la resta es: %i\n",r);
    m=a*b;
    printf("\nEl resultado de la multiplicacion es: %i\n",m);
    d=a/b;
    printf("\nEl resultado de la division es: %f\n",d);
    return 0;
}