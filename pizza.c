# include <stdio.h>
int main (void){ 
    int a;
    printf("\n\n               Pizzeria la cuarteada\n\n\n");
    printf("\n\n[1].-Pizza Sencilla\n");
    printf("[2].-Pizza Mediana\n");
    printf("[3].-Pizza Familiar\n");
    printf("[4].-Pizza Jumbo\n\n");
    printf("¿Cual pizza desea ordenar?");
    scanf("%i",&a);
    switch (a){
        case 1:
            printf("\nHa seleccionado una Pizza Sencilla\nContiene 8 rebanadas\nCosto $100.00\n\nGracias por su compra\n\n");
            break;
        case 2:
            printf("\nHa seleccionado una Pizza Mediana\nContiene 8 rebanadas\nCosto $150.00\n\nGracias por su compra\n\n"); 
            break;
        case 3:
            printf("\nHa seleccionado una Pizza Familiar\nContiene 10 rebanadas\nCosto $200.00\n\nGracias por su compra\n\n");
            break;
        case 4:
            printf("\nHa seleccionado una Pizza Jumbo\nContiene 14 rebanadas\nCosto $300.00\n\nGracias por su compra\n\n");
            break;
        default:
            printf("\nUsted ha seleccionado una opcion que no esta en el menu.\n\n");
        }
    return 0;
}