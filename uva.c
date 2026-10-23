# include <stdio.h>
int main (void){
    int p,kg,tu,t,p2,p3;
    printf("\n          Grupo de Vinniteros el\n\n             << GLADIADOR >>\n\n\n\n");
    printf("¿Cuantos kg de Uva entrego el productor?\n");
    scanf("%i",&kg);
    printf("\nTipos de Uva:\n");
    printf("[1].-Tipo A");
    printf("\n[2].-Tipo B");
    printf("\n¿Que tipo de Uva entrego el productor?\n");
    scanf("%i",&tu);
    printf("\nTamaños disponibles:");
    printf("\n[1].-Tamaño 1");
    printf("\n[2].-Tamaño 2");
    printf("\n¿Cual fue el tamaño que entrego?\n");
    scanf("%i",&t);
    printf("¿Ingrese el precio inicial por kg de Uva?\n");
    scanf("%i",&p);
    switch(tu){
        case 1:
            if(t==1){  
                p2=p*kg*0.20;
                p3=p*kg+p2;
            }
                else{
                    p2=p*kg*0.30;
                    p3=p*kg+p2;
                }
            break;
        case 2:
            if(t==1){
               p2=p*kg*0.30;
               p3=p*kg-p2; 
            }
                else{
                    p2=p*kg*0.50;
                    p3=p*kg-p2;
                }
            break;
        default:
            printf("\nHa seleccionado un Tipo de Uva que no existe\n\n");
    }
    printf("\nEl productor recibira un total de: $%i\n",p3);
    return 0;
}