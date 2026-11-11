# include <stdio.h>
int main (void){
    int n,t=0,t2=0;
    float can;
    printf("\nIngrese la cantidad de numeros: ");
    scanf("%i",&n);
    for(int num=1 ; num<=n; num++){
        printf("\nIngrese un numero: ");
        scanf("%f",&can);
        if(can<0){ 
            t+=1;
        }
        else{ 
            t2+=1;
        }
    }
    printf("\nNumeros menores a 0 fueron:%i\n\n",t);
    printf("\nNumeros mayores a 0 fueron:%i",t2);
}