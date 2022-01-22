#include <stdio.h>

int fibonachi(int n) 
{
	if (n == 0)
		return 0;
	if (n <= 2)
		return 1;
	else
		return fibonachi(n-1) + fibonachi(n - 2);
}

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d",fibonachi(n));

	return 0;
}