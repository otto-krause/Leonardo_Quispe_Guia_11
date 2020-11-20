#include <stdlib.h>
#include <stdio.h>
int main ()
{
 float n1,p;
 OctavaParte(n1,p);
}
void OctavaParte(float num1, float p)
{
 printf("Ingrese un numero ");
 scanf("%f",&num1);
 p=num1/8;
 system("cls");
 printf("La octava parte es %f",p);
 return 0;
}
