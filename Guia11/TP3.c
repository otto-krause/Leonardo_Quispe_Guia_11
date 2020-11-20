#include <stdlib.h>
#include <stdio.h>
int main ()
{
 int n1,n2;
 Porcentaje(n1, n2);
}
void Porcentaje(int num1,int num2)
{
 float pf=0;
 printf ("Ingresar la cantidad total de personas ");
 scanf ("%d",&num1);
 printf ("Ingresar la cantidad de mujeres ");
 scanf ("%d",&num2);
 pf=num2*100/num1;
 system ("cls");
 printf ("El porcentaje de mujeres es %7.2f",pf);
 printf(" y el porcentaje de hombres es %7.2f",100-pf);
 return 0;
}
