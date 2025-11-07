#include <stdio.h>
#include"power.h"
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	square(n);
	cube(n);
	return 0;
}