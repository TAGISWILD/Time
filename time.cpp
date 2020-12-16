#include <stdio.h>
#include <stdlib.h>
//************************************************************************
void delay(int msec);
//************************************************************************
int main()
{
	int h,m,s;
	printf("Enter Current Time (HH:MM:SS)\n");
	scanf("%d%d%d",&h,&m,&s);
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				system("cls");
			printf("%d:%d:%d",h,m,s);
			delay(20000);
		}
		s=0;
	}
		m=0;
	}
	h=0;
}
//****************************************************************************
void delay(int msec)
{
for(int i=0; i<=msec; i++)
{
for(int j=0; j<=19299; j++)
{		
}
}
}
