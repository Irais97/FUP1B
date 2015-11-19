#include<stdio.h>
int n1;
int n2;
int n3;
int i;
int main()
{// inicio
printf("la inmortalidad del cangrejo\n");
printf("ingresa la profundidad\n");
scanf("%d",&n1);

printf("metros que avanza en el dia\n");
scanf("%d",&n2);

printf("metros que retrocede en la noche\n");
scanf("%d",&n2);

while(n1>0)
    
{
    	i++;
    	n1-=n2;
    	if(n1<=0)
       	{
	      	printf("si salio\n %d",i);
	    	break;
     	}
        	
	        	n1+=n3;
	            if(n2+=n3 || n1<0)
        	
	          {
	          	printf("no saldra\n %d");
	          	break;
			  }
 }
}//fin
