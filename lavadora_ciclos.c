#include<stdio.h>
//libreria deE/S
int K;
int R;
int main()
{//inicio
printf("ciclo de lavado ultra\n");
printf("ingresa la cantidad de ropa a lavar\n");
scanf("%d",&K);
if(K>=0 && K<=20)
{
	if(K>=0 && K<=10)
	{
		printf("el nivel de agua es el minimo\n");
	}
	else
	{
		if(K>=11 && K<=15)
		{
			printf("el nivel de agua es normal\n");
		}
		else
		{
			if(K>=16 && K<=20)
			{
				printf("el nivel de agua es el maximo\n");
			}
		}
	}
	printf("ingresa el tipo de ropa a lavar\ndelicada(1)\nnormal(2)\nmuy sucia(3)\n");
	scanf("%d",&R);
	if(R>=1 && R<=3)
	{
		if(R<2)
		{
			printf("la ropa es delicada\nel tiempo de lavado es de 5min.");
		}
		else
		{
			if(R<3)
			{
				printf("la ropa es normal\nel tiempo de lavado es de 10min.");
			}
			else
			if(R>2)
			{
				printf("la ropa esta muy sucia\nel tiempo de lavado es de 20min.");
			}
		}
	}
	else
	{
		printf("no se puede lavar");
	}
}
else
{
	printf("no se puede lavar");
}
}//fin
