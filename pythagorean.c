#include<stdio.h>
#include<cs50.h>
int main(void)
{
	int a = get_int ("Side 1 ");
	int b = get_int ("Side 2 ");
	int c = get_int ("Side 3 ");
	int max=0,sum=0;
	if (a>b){
		if (a>c)
			max=a;
		else
			max=c;
			}
	else {
		if(b>c)
			max=b;
		else
			max=c;
		}
	if(max==a)
		{
		max=max*max;
		sum=b*b+c*c;
		if(max==sum)
			printf("Yes\n");
		else
			printf("No\n");}
	else if(max==b)
		{
		max=max*max;
		sum=a*a+c*c;
		if(max==sum)
			printf("Yes\n");
		else
			printf("No\n");}
	else
		{
		max=max*max;
		sum=b*b+a*a;
		if(max==sum)
			printf("Yes\n");
		else
			printf("No\n");}
}

