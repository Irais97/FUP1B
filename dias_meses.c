#include<stdio.h>
int dia;
int mes;
int mesA;
int diaA;
int diasB;
int diasC;
int totalD;
char confirmacion;
int main()
{//inicio
printf("programa para saber cuantos dias pasan de un mes a otro\n");
confirmacion='s';
while(confirmacion=='s')
{
	printf("ingresa el dia\n");
scanf("%d",&dia);
if(dia>=0&&dia<=30)
{
printf("ingresa el mes con numero\n");
scanf("%d",&mes);
if(mes>=1&&mes<=12)
{
	printf("ingresa otro dia\n");
scanf("%d",&diaA);
printf("ingresa otro mes con numero\n");
scanf("%d",&mesA);
switch(mes)
{
	case 1:{
	mes=0;
	break;
	
	    case 2:{
		mes=30;
		break;
	    
	      case 3:
		  {
	    	mes=60;
            break;
					    
		      case 4:
			  {
		      	mes=90;
		      	break;
				
				  case 5:
				  {
				  	mes=120;
				  	break;
					
					   case 6:
					   {
					   	mes=150;
					   	break;
						
						    case 7:
							{
						     mes=180;
						  	 break;
						    
						        case 8:
								{
						    	mes=210;
						    	break;
							    
							        case 9:
									{
							    	mes=240;
							    	break;
									
									    case 10:
										{
										mes=270;
										break;
										
										    case 11:
											{
										  	mes=300;
										  	break;
										    
										        case 12:
												{
										      	mes=330;
										      	break;
										        }
										    }
									    } 
								    }
							    }
						    }
					    }
				    }
			    }
		    }
        }
    }  
}

diasB=mes+dia;
switch(mesA)
{
	case 1:
	{
     mesA=0;
	 break;
	
	 case 2:
	   {
		mesA=30;
		break;
	    
	      case 3:
	    	{
	    	mesA=60;
		    break;
		    
		      case 4:
		      	{
		      	mesA=90;
		      	break;
				
				  case 5:
				  	{
				  	mesA=120;
				  	break;
					
					   case 6:
					   	{
					   	mesA=150;
					   	break;
						
						    case 7:
						    {
						     mesA=180;
						  	 break;
						    
						        case 8:
						        {
						    	mesA=210;
						    	break;
							    
							        case 9:
							    	{
							    	mesA=240;
							    	break;
									
									    case 10:
										{
										mesA=270;
										break;
									 
										    case 11:
										  	{
										  	mesA=300;
										  	break;
										    
										        case 12:
										      	{
										      	mesA=330;
										      	break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }												
}
diasC=mesA+diaA;
totalD=diasC-diasB;
printf("Los dias son:%d\n",totalD);
}
   else
   {
      printf("mes no existente\n");
   }
}
   else 
   {
   	printf("dia no existente\n");
   }	
}
printf("continuar si(1), no(2)/n");
fflush(stdin);
scanf("%c",&confirmacion);
}//fin 

