#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c,d;
	a = 123, b = 456;
	c = a + b;
	d = b - a;
	int x, y, z;
	x = 3;
	z = 1;
	y = 2;
	int a1, a2, a3;
	scanf_s(" %d, %d,%d", &a1, &a2, &a3);
		if (a1 > a2 && a2 > a3)
			printf("%d\n", a1);
		if (a2 > a3 && a3 > a1)
			printf("%d\n", a2);
		if (a1 > a3 && a3 > a2)
			printf("%d\n", a1);
		if (a2 > a1 && a1 > a3)
			printf("%d\n", a2);
		if (a3 > a2 && a2 > a1)
			printf("%d\n", a3);
		if (a3 > a1 && a1 > a2)
			printf("%d\n", a3);
		

	for (int i = 0; i < 5; i++)
		if (i % 4 == 0)
			printf("*****\n");
		else
			printf("*\n");
		
	
	printf("   * \n");
	printf("  * *\n");
	printf(" * * *\n");
	


	printf("%d\n",(x + y) * z);
	printf("a+b=%d\nb-a=%d\n",c,d);
	printf("*************\n");
	printf("very good!\n");
	printf("***********\n");
	return 0;
 }

