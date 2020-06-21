#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
{
	char producto[50];
	
}data;


int main()
{
	int i,j;
	int filas;
	int columnas=4;
	data s1;
	
	printf("\nCuantos Articulos se van a mostrar: ");
	scanf("%d",&filas);
	
	int matriz[filas][columnas];
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			matriz[i][0]=i;
			break;
		}
	}
	printf("\nNOTA: PRESIONE 15 PARA SALIR\n");
	
	printf("\n\t\t\t\tSUPERMERCADO\n\t");
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			if(matriz[i][0] == 0)
			{
				memcpy(s1.producto,"Tostitos Fuego\t$25",50);
			}
			if(matriz[i][0]==1)
			{
				memcpy(s1.producto,"Doritos Dinamita\t$20",50);
			}
			if(matriz[i][0]==2)
			{
				memcpy(s1.producto,"Galletas Principe\t$18",50);
			}
			if(matriz[i][0]==3)
			{
				memcpy(s1.producto,"Lucas\t\t$7",50);
			}
			if(matriz[i][0]==4)
			{
				memcpy(s1.producto,"Donas\t\t$5",50);
			}
			if(matriz[i][0]==5)
			{
				memcpy(s1.producto,"Galletas Marias\t$13",50);
			}
			if(matriz[i][0]==6)
			{
				memcpy(s1.producto,"Pelon\t\t$8",50);
			}
			if(matriz[i][0]==7)
			{
				memcpy(s1.producto,"Takis\t\t$15",50);
			}
			if(matriz[i][0]==8)
			{
				memcpy(s1.producto,"Coca cola\t\t$17",50);
			}
			if(matriz[i][0]==9)
			{
				memcpy(s1.producto,"Sabritas Fuego\t$22",50);
			}
			if(matriz[i][0]==10)
			{
				memcpy(s1.producto,"Sabritas Especies\t$24",50);
			}
			if(matriz[i][0]==11)
			{
				memcpy(s1.producto,"Cacahuates\t$15",50);
			}
			if(matriz[i][0]==12)
			{
				memcpy(s1.producto,"Dedos\t\t$5",50);
			}
			if(matriz[i][0]==13)
			{
			    memcpy(s1.producto,"Doritos Verdes\t$90",50);
        	}
        	printf("\n[%d]Producto: %s\t",i+1,s1.producto);
        	break;
		}
	}	
	
	int opcion;
	int cantidad;
	float total=0;;
	printf("\n");
	do{
		printf("\nQue producto va a llevar: ");
	    scanf("%d",&opcion);
		switch(opcion)
	{
		case 1: 
		       printf("\nCuantas Bolsas de Tostitos Fuego quiere: ");
		       scanf("%d",&cantidad);
		       total +=25*cantidad;
		       break;
		
		case 2:
			   printf("\nCuantas Bolsas de Doritos Dinamita quiere: ");
			   scanf("%d",&cantidad);
			   total +=20*cantidad;
			   break;
		
		case 3: 
		       printf("\nCuantos paquetes de  Galletas Principe quiere: ");
		       scanf("%d",&cantidad);
		       total +=18*cantidad;
		       break;
		
		case 4:
			   printf("\nCuantos Lucas quiere: ");
			   scanf("%d",&cantidad);
			   total +=7*cantidad;
			   break;
		
		case 5: 
		       printf("\nCuantas Donas quiere: ");
		       scanf("%d",&cantidad);
		       total +=5*cantidad;
		       break;
		
		case 6:
			   printf("\nCuantas Galletas Marias quiere: ");
			   scanf("%d",&cantidad);
			   total +=13 * cantidad;
			   break;
		
		case 7: 
		       printf("\nCuantos Pelon quiere: ");
		       scanf("%d",&cantidad);
		       total +=8*cantidad;
		       break;
		
		case 8:
			   printf("\nCuantas Bolsas de Takis quiere: ");
			   scanf("%d",&cantidad);
			   total +=15*cantidad;
			   break;
		
		case 9: 
		       printf("\nCuantas Coca cola quiere: ");
		       scanf("%d",&cantidad);
		       total +=17*cantidad;
		       break;
		
		case 10:
			   printf("\nCuantas Sabritas Fuego quiere: ");
			   scanf("%d",&cantidad);
			   total+=22*cantidad;
			   break;
		
		case 11: 
		       printf("\nCuantas Sabritas de especies quiere: ");
		       scanf("%d",&cantidad);
		       total += 24 * cantidad;
		       break;
		       
		case 12: 
		       printf("\nCuantos Cacahuates quiere: ");
		       scanf("%d",&cantidad);
		       total += 15 * cantidad;
		       break;
		
		case 13:
			   printf("\nCuantos Dedos quiere: ");
			   scanf("%d",&cantidad);
			   total += 5 * cantidad;
			   break;
		
		case 14: 
		       printf("\nCuantas Doritos Verdes quiere: ");
		       scanf("%d",&cantidad);
		       total += 90 * cantidad;
		       break;
		       
		case 15:
			   printf("\nUsted ha salido de la tienda");
			   break;   		   
	}	
	    printf("\n");	
	    printf("\nEste es su total: $%2.f ",total);		
	}while(opcion!=15);
	
	float propio;
	float cambio;
	
	printf("\nCon cuanto va a pagar: ");
	scanf("%f",&propio);
	
	if(total>propio)
	{
		printf("\nUsted no puede pagar la cuenta ");
	}
	else
	{
		cambio=propio-total;
		printf("\nSu cambio es %2.f ",cambio);
	}	
}
