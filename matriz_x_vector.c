#include<stdio.h>
int matriz[3][3];
int i;
int j;
int n1[5];
int a;
int b;
c=0;
int main()
{
	printf("ingresa la matriz que sera multiplicada por un vector\n");
	printf("ingresa el vector\n");
		for(c=0;c<3;c++)
		{
		scanf("%d",&n1[c]);
	    }
	
	       printf("ingresa la matriz\n");
	       for(i=0;i<3;i++)
	        {
		   for(j=0;j<3;j++) 
		   {
		    scanf("%d",&matriz[i][j]);
		   }
	       }
	       c=0;
	       for(i=0;i<3;i++)
	       {
		   for(j=0;j<3;j++)
		   {
			a=matriz[i][j]*n1[c];
			a+=b;
			c++;
		   }
		   }
		   {
		 	printf("%d",matriz,b);
		   }
	       
}
