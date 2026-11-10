# include <stdio.h>
int main(void){
    int num,cont=0;
    printf("\n   La tabla de multiplicar\n");
    printf("\nIngrese un numero: \n");
    scanf("%i",&num);
    printf("la tabla de multiplicar del %i es: \n",num);
    while(++cont<=10)
        printf("%i*%i=%i\n",num,cont,num*cont);
    return 0;
}