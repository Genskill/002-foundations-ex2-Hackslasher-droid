#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int type = get_int("Enter type of pattern (1 or 2) ");
	if (type==1 || type==2)
	{
	int row  = get_int("Number of rows");
	int i=0,j=0,space=0;
	switch(type)
	{
		case 1 : 
			for(i=row;i>=1;i--){
					for(j=1;j<=i;j++)
						{
							printf("#");
						}
					printf("\n");
					}
			break;
		case 2 :	
			for(i=0;i<row;i++){
					for(space=i;space<row-1;space++){
					printf(" ");}
					
						for(j=0;j<=i;j++)
							printf("#");
						space=space-1;
						printf("\n");}
			break;
	}
	}
	else
		printf("Enter 1 or 2\n"); 
}
