#include<stdio.h>
/* calculadora*/
int r;
int s;
int m;
int d;
int x;
int y;
char a;
int main()
{//inicio
  printf("CALCULADORA\n");
  printf("ingresa 2 numeros\n");
  scanf("%d",&x);
  scanf("%d",&y);
  r=x+y;
  s=x-y;
  m=x*y;
  d=x/y;
  printf("el resultado de resta es %d\n",r);
  printf("el resultado de suma es %d\n",s);
  printf("el resultado de multiplicacion es %d\n",m); 
  printf("el resultado de divicin es %d\n",d);
  
  printf("desea seguir ingrese 1(si) 2(no)\n");
}//fin

