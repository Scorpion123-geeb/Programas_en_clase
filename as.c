# include <stdio.h>
int main (void){
    int n;
    printf("Ingresa un numero: ");
    scanf("%i",&n);
    int a=n,r=0;    
    for (int i=0;i<n;i++){
        for(int k=0;k<r;k++){
            printf(" ");
        }
        for(int j=0;j<a;j++){
            printf("*");
        }
        printf("\n");
        a--;
        r++;
    }
    return 0;
}