#include<stdio.h>//Libreria de E/S
/* numeros naturales*/
int numero;
int i=0;
int a=0;
int main()

{//inicio
printf("programa para la suma de numeros");
printf("\n escribe un numero del 1 al 9\n");
scanf("%d",&numero);
while (i<=(numero+1))
{
	a=a+1;
    i=i+1;
}
printf("resultado es %d",a);
}//fin

