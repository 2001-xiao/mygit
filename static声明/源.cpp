#include<stdio.h>
#include<string.h>

// int ADD(int x, int y)
//{
//
//	int z = x + y;
//	return z;
//}

extern int ADD(int x, int y);
int main()
{
	int a = 1;int b = 2;
	int sum = 0;
	
	 sum = ADD(a, b);
	printf("sum=%d", sum);




	return 0;
}