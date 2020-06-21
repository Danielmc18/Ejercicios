#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand(time(NULL));
	
	int minimo,maximo;
	int n;
	printf("\nDesde que valor quiere empezar su arreglo: ");
	scanf("%d",&minimo);
	printf("\nDesde que valor quiere finalizar su arreglo: ");
	scanf("%d",&maximo);
	
	printf("\nDe que tamanio quiere su arreglo: ");
	scanf("%d",&n);
	
	int arreglo[n];
	int i;
	for(i = 0; i < n; i++)
	{
		arreglo[i]= minimo + rand()% maximo;
	}
	for(i = 0; i < n; i++)
	{
		printf("[%d] ",arreglo[i]);
	}
	getch();
}
