# include <stdio.h>
int main (void){
    int P,K,A,c,p;
    printf("\n          SITIO DE CAMIONES  EL GOLEM\n\n\n");
    printf("Tipos de autobus y costos:\n");
    printf("[1].-Tipo A($2.00 x Km)\n");
    printf("[2].-Tipo B($2.50 x Km)\n");
    printf("[3].-Tipo C($3.00 x Km)\n");
    printf("\nIngrese en que autobus desea viajar:");
    scanf("%i",&A);
    printf("\nIngrese el total de personas: ");
    scanf("%i",&P);
    printf("\nIngrese los kilometros recorridos: ");
    scanf("%i",&K);
    switch(A){
        case 1:
            if(P>20){
                c=K*2;
                p=c*P;
            }
                else{
                    c=K*2;
                    p=c*20;
                }
            break;
        case 2:
            if(P>20){
                c=K*2.50;
                p=c*P;
            }
                else{
                    c=K*2.50;
                    p=c*20;
                }
            break;
        case 3:
                if(P>20){
                c=K*3;
                p=c*P;
            }
                else{
                    c=K*3;
                    p=c*20;
                }
            break;
        default:
            printf("\n\nHa elegido un Autobus no disponible\n\nIntente de nuevo\n\n");      
    }
    printf("\n\nTotal por persona: $%i",c);
    printf("\nEl total a pagar es: $%i",p);
    printf("\n\nGracias por elegir a CAMIONES EL GOLEM\n\n");
    return 0;
}