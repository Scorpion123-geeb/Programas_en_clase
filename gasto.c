# include <stdio.h>
int main (void){
    int s;
    float a,p,c,d,A,P,C,D;
    printf("\n                    MI GASTO MENSUAL\n\n");
    printf("Ingresa tu salario semanal: ");
    scanf("%i",&s);
    a=s*0.15;
    p=s*0.20;
    c=s*0.50;
    d=s*0.15;
    A=a*4;
    P=p*4;
    C=c*4;
    D=c*4;
    printf("\nPago de servicios al mes:       $%f",P);
    printf("\nAhorro:                         $%f",A);
    printf("\nGasto destinado en laComida:    $%f",C);
    printf("\nGasto en mi diversion:          $%f\n\n",D);
    return 0;
    
    
}