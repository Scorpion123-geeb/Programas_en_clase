# include <stdio.h>
int main (void){
   float a,b;
   printf("\n    Sistema de medicion de temperatura.\n\n");
   printf("Ingrese la cantidad de milivolts: ");
   scanf("%f",&a);
   b=a*10;
   if(a<1)
      printf("Esta en el rango FRIO\n");
   else{
      if(a<4)
         printf("Esta en el rango TEMPLADO\n");
      else
         printf("Esta en el rago CALIENTE\n");
   }
   printf("El total en C°=%f",b);
   return 0;
}