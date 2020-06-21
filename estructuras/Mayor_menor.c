#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	srand(time(NULL));
	int i,n;
	
	printf("\nDe que tamanio quiere su arreglo: ");
	scanf("%d",&n);
	
	int arreglo[n];
	
	for(i = 0; i < n; i++)
	{
		arreglo[i]= 1 + rand()% 100;
	}
	for(i = 0; i < n; i++)
	{
		printf("[%d]",arreglo[i]);
	}
	int mayor;
	int menor=mayor;
	for(i = 0; i < n; i++)
	{
		if(arreglo[i]>mayor)
		{
			mayor=arreglo[i];
			printf("\nEl mayor es: %d y se encuentra en la casilla [%d]",mayor,i);
		}
	}	
	for(i=0;i<n;i++)
	{
		if(arreglo[i]<menor)
		{
			menor=arreglo[i];
			printf("\nEl menor es: %d y se encuentra en la casilla [%d]",menor,i);
		}
	}
}
