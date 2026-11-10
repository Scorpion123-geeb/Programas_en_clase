# include <stdio.h>
int main (void){
    int a;
    float b,c,d,e;
    printf("\n\n         Fabricas el\n          GOLEMCITO\n\n");
    printf("ingrse la clave del producto que desea conocer su precio: \n");
    scanf("%i",&a);
    printf("Ingrese el costo de la materia prima: \n");
    scanf("%f",&b);
    if (a==3||4)
        b+=b*0.75;
        else
            if(a==1||5)
                b+=b*0.80;
            else 
                b+=b*0.85;
    if (a==2||5)
        a+=a*0,30;
        else 
            if (a==3||6)
                a+=a*0.35;
            else 
                a+=a*0.28;
    
    return 0;
}