# include <stdio.h>
int main (void){
    int a,b,c,d;
    printf("\n        ¿Voy a comprar mis tenis este fin de semana?\n\n");
    printf("¿Tengo dinero?");
    scanf("%i",&a);
    printf("¿Me va acompañar mi hermana?");
    scanf("%i",&b);
    printf("¿Me va a prestar dinero mi hermana?");
    scanf("%i",&c);
    printf("¿Me va a prestar dinero mi hermano?");
    scanf("%i",&d);
    if((a==1&&b==1)||(c==1||d==1)){  
        printf("Voy a comprar mis tenis\n");
    }
        else{
            printf("No voy a poder comprar mis tenis\n");
        }
    return 0;   
}