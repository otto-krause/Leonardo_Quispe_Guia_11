#include <stdlib.h>
#include <stdio.h>
int main ()
{
 int n1, n2, n3, n4, n5;
 Resistencias(n1, n2, n3, n4, n5);
}
void Resistencias(int r1, int r2, int r3, int r4, int r5, int RT)
{
 printf("Ingrese el valor de cinco resistencias en serie \n");
 scanf("\n%d",&r1);
 scanf("\n%d",&r2);
 scanf("\n%d",&r3);
 scanf("\n%d",&r4);
 scanf("\n%d",&r5);
 system("cls");
 RT=r1+r2+r3+r4+r5;
 printf("Las resistencias ingresadas son: %d, %d, %d, %d, %d\n", r1, r2, r3, r4, r5);
 printf("La resistencia total es %d",RT);
 return 0;
}
