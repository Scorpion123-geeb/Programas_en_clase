# include <stdio.h>
int main (void){
    int a,b;
    printf("\n                JUGAR FUTBOL\n\n");
    printf("\n¿Ya termine mi tarea? \n");
    scanf("%i",&a);
    printf("\n¿Tengo un balon? \n");
    scanf("%i",&b);
    if(a==1 && b==1){
        printf("\nVoy a ir a jugar con los compas\n");
    }
        else{
            printf("\nNo podremos jugar\n");
        }
    return 0;
}