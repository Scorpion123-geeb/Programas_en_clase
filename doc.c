# include <stdio.h>
int main (void){
    int a,b,c,d;
    printf("       Consultorio del Dr. Lorenzo T.\n               Mata Lozano\n\n");
    printf("Ingrese cuantas citas duro el tratamiento:");
    scanf("%i",&a);
    printf("\nCostos:\n");
    printf("[1].-Primeras 3 citas a        $200.00\n");
    printf("[2].-Las siguientes 2 citas a  $150.00\n");
    printf("[3].-Las siguientes 3 citas a  $100.00\n");
    printf("[4].-Las restantes a           $50.00\n");
    printf("\nIngrese a que opcion pertenece:\n");
    scanf("%i",&b);
    switch (b){
        case 1:
            c=a*200;
            break;
        case 2:
            d=a-3;
            c=d*150+600;
            break;
        case 3:
            d=a-5;
            c=d*100+900;
            break;
        case 4:
            d=a-8;
            c=d*50+1200;
            break;
        default:
            printf("Ha seleccionado una opcion que no existe\n Intente de nuevo\n");
    }
    printf("\nEl pasciente debe pagar un total de:$%i",c);
    return 0;
}