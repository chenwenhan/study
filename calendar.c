#include "stdio.h"
int main()
{
	unsigned int year=2017,days=233,month=233,pinyear=0,runyear=0,i=0,yu,gh=0,c;
	printf("please inpu the year and month:");
	scanf("%d %d",&year,&month);	
	for(i=1900;i<year;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0))
			runyear++;
		else
			pinyear++;
	}
	days = runyear*366 + pinyear*365;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			days+=31;
		}
		else
		{
			if(i==2)
			{
				if(year%400==0||(year%4==0&&year%100!=0))
				{
					days+=29;
				}
				else
				{
					days+=28;
				}	
			}
			else
			{
				days+=30;	
			}
			
		}
	}
	yu=days%7;
	printf("                                 calendar                            \n");
	printf("---------------------------------------------------------------------\n");
	printf("Monday    tuesday   Wednesday Thursday  friday    Saturday  Sunday   \n");
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		for(i=0;i<yu;i++)
		{
			printf("          ");
			gh++;
		}
		
		for(i=1;i<=31;i++)
		{
			if(gh%7==0)
			{
				printf("\n");
			}
			printf("%4d      ",i);
			gh++;
		}	
	}
	else
	{
		if(month==2)
		{
			if(year%400==0||(year%4==0&&year%100!=0))
			{
					for(i=0;i<yu;i++)
					{
						printf("          ");
						gh++;
					}
		
					for(i=1;i<=29;i++)
					{
						if(gh%7==0)
						{
							printf("\n");
						}
						printf("%4d      ",i);
						gh++;
					}		
			}
			else
			{
					for(i=0;i<yu;i++)
					{
						printf("          ");
						gh++;
					}
					
					for(i=1;i<=28;i++)
					{
						if(gh%7==0)
						{
							printf("\n");
						}
						printf("%4d      ",i);
						gh++;
					}		
			}
		}
		else
		{
				for(i=0;i<yu;i++)
				{
					printf("          ");
					gh++;
				}
				
				for(i=1;i<=30;i++)
				{
					if(gh%7==0)
					{
						printf("\n");
					}
					printf("%4d      ",i);
					gh++;
				}			
		}
	}
	printf("\n-------------------------------------------------------------------\n");
	printf("%d",yu);
	getchar(); 
	c=getchar(); 
	
	return 0; 
} 
