#include<stdio.h>
int matriz[3][3];
int i;
int j;
int main()
{
	printf("ingresa la matriz\n");

		for(i=0;i<3;i++)
		{
		
			for(j=0;j<3;j++)
			{
			printf("ingresa el valor [%d][%d] de la matriz\n", i+1,j+1);
			scanf("%d",&matriz[i][j]);
	    	}	
    	}
	       
           printf("la matriz ordenada es\n");
           for(i=0;i<3;i++)
           {
           print("\n");
         	for(j=0;j<3;j++)
         	
		   {
		 	printf("%d",matriz[i][j]);
		 	
		   }
	       }
}

