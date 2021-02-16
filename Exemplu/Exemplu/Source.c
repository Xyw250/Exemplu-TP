#include<stdio.h>

int i=0;

void main()
{
	//static int xyz = 5;
	int  a= 2;
	int b=0;

	 sum(a,b);

	//prod(2,5);
//	dif(10,5);
	//impartire(7,0);
}

int sum(int a, int b)
{
	int sum=0;
	sum = a+b;
	prod(a,b);
	return sum;
}

int prod(int a, int b)
{
	dif(a,b);
	return a*b;
}

int dif(int a, int b)
{
	impartire(a,b);
	return a-b;
}

int impartire(int a,int b)
{
	if(b==0)
	{
		printf_s("%s","Cannot divide by 0");
		return 0;
	}

	return a/b;
}