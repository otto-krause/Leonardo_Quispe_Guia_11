#include <stdlib.h>
#include <stdio.h>
int main()
{
 float n1, n2;
 FuerzaYSuperficie(n1, n2);
}
void FuerzaYSuperficie(float num1, float num2)
{
 float pre=0;
 printf("Ingrese la fuerza ");
 scanf("%f",&num1);
 printf("Ingrese la superficie ");
 scanf("%f",&num2);
 pre=num1/num2;
 system("cls");
 printf("La presion es %2.f",pre);
 return 0;
}
