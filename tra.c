# include <stdio.h>
int main (void){
    int n,a;
    printf("Ingrese un numero:");
    scanf("%i",&n);
    a=n;
    while(a>=0){
        printf("%i\n",a);
        a-=1;
    }
    return 0;
}