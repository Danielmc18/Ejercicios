#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,c;
	
	int par=0;
	int impar=1;
	for(i=0;i<8;i++)
	{
		printf("\n");
		for(j=0;j<8;j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
				{
					printf("%d",impar);
				}
				else
				{
					printf("%d",par);
				}
			}
			else
			{
				if(j%2==0)
				{
					printf("%d",par);
				}
				else
				{
					printf("%d",impar);
				}
			}
		}
	}
	
	
}
