#include<stdio.h>
int main() 
{
	int a, b, c,t;
	printf("��������������");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		t = a;
		a= b;
		a = t;
	}
	if (a> c)
	{
		 t =a;
		a = c;
		c= t;
	}
	if(b> c) 
	{
		 t = b;
		b = c;
		c= t;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}