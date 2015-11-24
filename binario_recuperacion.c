#include<stdio.h>
int n1[300],x=0,y=0,z=0;
int main()
{
	printf("programa para convertir de decimal a binario\n");
	printf("ingresa un numero\n");
	scanf("%d",&z);
	while(z>=2)
	{
		n1[x]=z%2;
		z=z/2;
		x++;
	
	}
	n1[x]=z;
	for(y=x;y>0;y--)
    printf("la convercion de decimal a binario es %d\n",n1[y]);
		
}
