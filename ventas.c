# include <stdio.h>
int main (void){
    int a,b,c,d,e;
    printf("\n              LA LANGOSTA AUMADA\n\n");
    printf("¿Cantidad de personas aceptables?\n\n");
    printf("[1].-Igual o menor a 200 personas\n ");
    printf("[2].-Mayor a 200 pero menor o igual a 300\n");
    printf("[3].-Mas de 300 personas\n");
    scanf("%i",&e);
    printf("¿Cuantas perosnas son?:\n");
    scanf("%i",&a);
    switch(e){
        case 1:
            b=a*95;
            printf("\nTotal a pagar por el evento: $%i\n",b);
            printf("\nGracias por elegir a la Langosta Aumada\n\n");
            break;
        case 2:
            c=a*85;
            printf("\nTotal a pagar por el evento: $%i\n",c);
            printf("\nGracias por elegir a la Langosta Aumada\n\n");
            break;
        case 3:
            d=a*75;
            printf("\nTotal a pagar por el evneto: $%i\n",d);
            printf("\nGracias por elegir a la Langosta Aumada\n\n");
            break;
        default:
            printf("Usted ha elegido una opcion que no existe\n\n");
    }
    return 0;


}