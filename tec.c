# include <stdio.h>
int main() {
    int a,b;
    printf("Ingrese el numero inicial: ");
    scanf("%i",&a);
    printf("Ingrese el numero final: ");
    scanf("%i",&b);
    while(a<=b){
        if(a%2!=0){
            printf("%i\n",a);
        }
        a+=1;
    }
    return 0;
}