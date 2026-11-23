# include <stdio.h>
int main (void){
    int  n=0,a=0,r=1;
    printf("Ingrese el valor n: ");
    scanf("%i",&n);
    a+=n-1;
    for (int i=0;i<n;i++){
        for (int f=0;f<a;f++){
            printf(" ");
        }
        for(int k=0;k<r;k++){
            printf("*");
        }
        printf("\n");
        r+=1;
        a-=1;
    }
    return 0;
}