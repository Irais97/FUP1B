#include<stdio.h>
int numero;
int n1;
int n2;
int i=1;
int a=0;
int main()
{//inicio
printf("programa para sumar\n");
	printf("ingresa dos un numero\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	while(i<=n1)
	{
		a=a+n1;
		i=i+1;
	}
	printf("%d\n",a);
}//fin
