# include <stdio.h>
int main (void){
    int a,b;
    printf("\n¿Es fin de Semana?: \n");
    scanf("%i",&a);
    printf("\n¿Es dia festivo?: \n");
    scanf("%i",&b);
    if(a==1 || b==1){
        printf("\nHoy no hay clase\n");
    }
        else{
            printf("\nHoy si hay clase\n");
        }
    return 0;
}