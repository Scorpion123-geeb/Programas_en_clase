# include <stdio.h>
int main (void){
    int a=1,b=1,n,a2;
    printf("\nIngrese la canidad de elementos que desea conocer\n de la sucesion de Fibonacci: \n");
    scanf("%i",&n);
    printf("0, %i, %i, ",a,b);
    for (int i=4;i<=n;i++){
        a2=a+b;
        a=b;
        b=a2;
        printf("%i, ",b);
    }
    return 0;
}