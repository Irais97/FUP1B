#include<stdio.h>//libreria de E/S
/*convertidor de almacenamiento*/
int resultado1;
int resultado2;
int resultado3;
int resultado4;
int resultado5;
int N1;
int main ()
{//inicio
printf("Escribe el numero de megabytes a convertir");
scanf("%d",&N1);
resultado1= N1*8388608;
resultado2= N1*1048576;
resultado3= N1*1024;
resultado4= N1/1024;
resultado5= N1/1024/1024;
printf("/n La conversion a bits es de %d", resultado1);
printf("/n La conversion a bytes es de %d", resultado2);
printf("/n La conversion a kilobytes es de %d", resultado3);
printf("/n La conversion a gigabytes es de %d", resultado4);
printf("/n La conversion a terabytes es de %d", resultado5); 
  return 0;
  }//fin

