#include <stdlib.h>
#include <stdio.h>
int main ()
{
 int n1, n2;
 AreaYPerimetro(n1, n2);
}
void AreaYPerimetro(int num1,int num2)
{
 int P=0;
 int A=0;
 printf("Ingrese un lado del rectangulo\n");
 scanf("%d",&num1);
 printf("Ingrese el otro lado del rectangulo\n");
 scanf("%d",&num2);
 P=2*num1+2*num2;
 A=num1*num2;
 system("cls");
 printf("El perimetro es %d el area es %d",P,A);
 return 0;
}
