#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) 
{
	int h,m,s;
	int d=1000;
	repp:printf("\nMENU\n1)12 hours format\n2)24 hours format\nSelect your choice");
	int choice;
	scanf("%d",&choice);
	if(choice!=1 && choice!=2)
	{
		printf("Invalid choice !");
		goto repp;
	}
	rep:printf("Set time :\n");
	scanf("%d%d%d",&h,&m,&s);
	switch(choice)
	{
		case 1:
		{
			if(h>12 || m>60 || s>60)
			{
				printf("Error !\n");
				goto rep;
			}
			while(1)
			{
				s++;
				if(s>59)
				{
					m++;
					s=0;
				} 
				if(m>59)
				{
					h++;
					m=0;
				} 
				if(h>12)
				{
					h=1;
				}	
				printf("\n Clock:");
				printf("\n%02d:%02d:%02d",h,m,s);
				Sleep(d);	 
				system("cls");
			}
			break;	
		}
		case 2:
		{
			if(h>24 || m>60 || s>60 || h==0)
			{
				printf("Error !\n");
				goto rep;
			}
			while(1)
			{
				s++;
				if(s>59)
				{
					m++;
					s=0;
				} 
				if(m>59)
				{
					h++;
					m=0;
				} 
				if(h>24)
				{
					h=1;
				}
				printf("\n Clock:");
				printf("\n%02d:%02d:%02d",h,m,s);
				Sleep(d);	 
				system("cls");
			}
			break;
		}
		default:
		{
			printf("Invalid Choice !");
			break;
		}
	}
	
	
	return 0;
}