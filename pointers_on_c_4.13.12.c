#include	<stdio.h>

int main()
{
	int year;
	
	printf("please input a number of year:\n");
	while (1)
	{
        	scanf("%d", &year);
        	if (year % 400 != 0)
        	{
        		if ((year % 100 != 0) && (year % 4 == 0))
        		{
        			printf("闰年\n");
        		}
        		else
        			printf("非闰年\n");
        	}
        	else
        		printf("闰年\n");
	}
}
