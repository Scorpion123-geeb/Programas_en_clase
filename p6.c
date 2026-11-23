# include <stdio.h>
int main (void){
    int s=0,p;
    printf("\nIngrese el sueldo por hora: ");
    scanf("%i",&p);
    for (int h=0,d=1;d<=6;d++){
        printf("\nIngrese las horas del dia %i: ",d);
        scanf("%i",&h);
        s+=h*p;
    }
    printf("\nTotal a pagar: %i",s);
    return 0;
}