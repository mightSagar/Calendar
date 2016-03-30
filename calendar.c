#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<windows.h>
#define SPACE 32
int gotoxy(int,int);
int getkey();
int odd(int,int);
int even(int,int);
int mid(int,int);
int choice(int,int);
int mmove(int,int);
int ymove(int);
int instr();
int main()
{
	char x,b;
	int a,o;
	system("cls");
	printf("What type of Calendar you want to see...!!!\n\n");
	printf("Press 'Y' for Yearly or Press 'M' for Monthly\n\n");
	printf("For Instructions press 'I'\n\n");
	printf("To exit press 'E'\n\n");
	x=getch();
	if(x=='M'||x=='m')
	{
		printf("\t\t::MONTHLY::");
		printf("\n\nEnter a year : ");
		scanf("%d",&a);
		printf("\nEnter the number corresponding to a month: ");
		scanf("%d",&o);
		system("cls");
		choice(a,o);
		gotoxy(0,0);
		mmove(a,o);
	}
	else if(x=='Y'||x=='y')
	{
		printf("\t\t::YEARLY::");
		printf("\n\nEnter a year after 1800 : ");
		scanf("%d",&a);
		system("cls");
		for(o=1;o<=12;o++)
		choice(a,o);
		gotoxy(0,0);
		ymove(a);
	}
	else if(x=='i'||x=='I')
		instr();
	else if(x=='e'||x=='E')
		exit(1);
	else
		printf("Wrong Input...!!!");
	printf("\n\n");
	return 0;
}
int choice(int a,int o)
{
	if(o==3||o==5||o==7||o==8||o==10||o==12)
	odd(a,o);
	else if(o==4||o==6||o==9||o==11)
	even(a,o);
	else if(o==1||o==2)
	mid(a,o);
	else
	printf("Wrong Input");
	return 0;
}
int odd(int x,int y)
{
	int a,b,i=1,j=0,k,l=0,m,n=1,o;
	if(y==3)
	{
		printf("\n\n\n\t\t\t\t   March %d",x);
		j=5;
	}
	else if
		(y==5)
	{
		printf("\n\n\n\t\t\t\t   May %d",x);
		j=3;
	}
	else if(y==7)
	{
		printf("\n\n\n\t\t\t\t   July %d",x);
		j=1;
	}
	else if(y==8)
	{
		printf("\n\n\n\t\t\t\t   August %d",x);
		j=4;
	}
	else if(y==10)
	{
		printf("\n\n\n\t\t\t\t   October %d",x);
		j=2;
	}
	else
	{
		printf("\n\n\n\t\t\t\t   December %d",x);
		j=0;
	}
	printf("\n\n\n\t\tMon\tTue\tWed\tThr\tFri\tSat\tSun\n\n");
	for(b=1801;b<=x;b++)
	{
		if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0))
		j=j+2;
		else
		j++;
		if(j>=7)
		j=j-7;
	}
	printf("\t\t");
	for(k=0;k<j;k++)
		printf("\t");
	for(k=0,m=1;k<6,m<=7-j;k++,m++)
		printf("%d\t",m);
	printf("\n\n\t");
	for(n=m;n<=31;n++)
	{
		printf("\t%d",n);
		l++;
		if(l==7)
		{
			printf("\n\n\t");
			l=0;
		}
	}
	return 0;
}
int even(int x,int y)
{
	int a,b,i=1,j=0,k,l=0,m,n=1,o;
	if(y==4)
	{
		printf("\n\n\n\t\t\t\t   April %d",x);
		j=1;
	}
	else if(y==6)
	{
		printf("\n\n\n\t\t\t\t   June %d",x);
		j=-1;
	}
	else if(y==9)
	{
		printf("\n\n\n\t\t\t\t   September %d",x);
		j=0;
	}
	else
	{
		printf("\n\n\n\t\t\t\t   November %d",x);
		j=5;
	}
	printf("\n\n\n\t\tMon\tTue\tWed\tThr\tFri\tSat\tSun\n\n");
	for(b=1801;b<=x;b++)
	{
		if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0))
		j=j+2;
		else
		j++;
		if(j>=7)
		j=j-7;
	}
	printf("\t\t");
	for(k=0;k<j;k++)
		printf("\t");
	for(k=0,m=1;k<6,m<=7-j;k++,m++)
		printf("%d\t",m);
	printf("\n\n\t");
	for(n=m;n<=30;n++)
	{
		printf("\t%d",n);
		l++;
		if(l==7)
		{
			printf("\n\n\t");
			l=0;
		}
	}
	return 0;
}
int mid(int x,int y)
{
	int a,b,i=1,j=5,k,l=0,m,n=1,o;
	if(y==1)
	{
		printf("\n\n\n\t\t\t\t   January %d",x);
		j=2;
	}
	else
		printf("\n\n\n\t\t\t\t   February %d",x);
	for(b=1801;b<=x;b++)
	{
		if (((b-1) % 4 == 0 && (b-1) % 100 != 0) || ((b-1) % 400 == 0))
		j=j+2;
		else
		j++;
		if(j>=7)
		j=j-7;
	}
	printf("\n\n\n\t\tMon\tTue\tWed\tThr\tFri\tSat\tSun\n\n");
	if(y==1)
	{
		printf("\t\t");
		for(k=0;k<j;k++)
			printf("\t");
		for(k=0,m=1;k<6,m<=7-j;k++,m++)
			printf("%d\t",m);
		printf("\n\n\t");
		for(n=m;n<=31;n++)
		{
			printf("\t%d",n);
			l++;
			if(l==7)
			{
				printf("\n\n\t");
				l=0;
			}
		}
	}
	else if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0))
	{
		printf("\t\t");
		for(k=0;k<j;k++)
			printf("\t");
		for(k=0,m=1;k<6,m<=7-j;k++,m++)
			printf("%d\t",m);
		printf("\n\n\t");
		for(n=m;n<=29;n++)
		{
			printf("\t%d",n);
			l++;
			if(l==7)
			{
				printf("\n\n\t");
				l=0;
			}
		}
	}
	else
	{
		printf("\t\t");
		for(k=0;k<j;k++)
			printf("\t");
		for(k=0,m=1;k<6,m<=7-j;k++,m++)
			printf("%d\t",m);
		printf("\n\n\t");
		for(n=m;n<=28;n++)
		{
			printf("\t%d",n);
			l++;
			if(l==7)
			{
				printf("\n\n\t");
				l=0;
			}
		}
		return 0;
	}
}
int mmove(int a,int o)
{
	int b;
	while(1)
	{
		b=getkey();
		if(b==77)
		{
			system("cls");
			o++;
			if(o==13)
				choice(++a,o=1);
			else
				choice(a,o);
			gotoxy(0,0);
		}
		else if(b==75)
		{
			system("cls");
			o--;
			if(o==0)
				choice(--a,o=12);
			else
				choice(a,o);
			gotoxy(0,0);
		}
		else if(b==72)
		{
			system("cls");
			choice(++a,o);
			gotoxy(0,0);
		}
		else if(b==80)
		{
			system("cls");
			choice(--a,o);
			gotoxy(0,0);
		}
		else if(b==SPACE)
		main();
		else
		return 0;
	}
}
int ymove(int a)
{
	int o,b;
	while(1)
	{
		b=getkey();
		if(b==77)
		{
			++a;
			system("cls");
			for(o=1;o<=12;o++)
			choice(a,o);
			gotoxy(0,0);
		}
		else if(b==75)
		{
			--a;
			system("cls");
			for(o=1;o<=12;o++)
			choice(a,o);
			gotoxy(0,0);
		}
		else if(b==72)
		{
			a+=10;
			system("cls");
			for(o=1;o<=12;o++)
			choice(a,o);
			gotoxy(0,0);
		}
		else if(b==80)
		{
			a=a-10;
			system("cls");
			for(o=1;o<=12;o++)
			choice(a,o);
			gotoxy(0,0);
		}
		else if(b==SPACE)
		main();
		else
		return 0;
	}
}
int instr()
{
	char b;
	system("cls");
	printf("\n\n\t\tFor Monthly calendar==>>\n\n\tPress 'Right Arrow key' for next month");
	printf("\n\n\tPress 'Left Arrow key' for previous month");
	printf("\n\n\tPress 'Up Arrow key' for next year");
	printf("\n\n\tPress 'Down Arrow key' for previous year\n\n");
	printf("\tPress 'Space' to go to main menu\n\n\n\n");
	printf("\t\tFor Yearly calendar==>>\n\n\tPress 'Right Arrow key' for next year");
	printf("\n\n\tPress 'Left Arrow key' for previous year");
	printf("\n\n\tPress 'Up Arrow key' to skip 10 years forward");
	printf("\n\n\tPress 'Down Arrow key' to skip 10 years backward");
	printf("\n\n\tPress 'Space' to go to main menu");
	printf("\n\n\n\n\t\t::Press 'Space' to go to main menu::\n\n");
	gotoxy(0,0);
	b=getch();
	if(b==' ')
	main();
	else
	{
		printf("Wrong Input...!!!");
		instr();
	}
}
int getkey()
{
	int ch;
	while((ch=getch())!=SPACE)
	{
		while(kbhit())
			return(getch());
	}
	return(ch);
}
int gotoxy(int x,int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
