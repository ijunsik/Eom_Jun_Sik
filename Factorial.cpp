#include <stdio.h>

int fibonachi(int n) 
{
	
	if (n <= 1)
		return 1;
	else
		return n * fibonachi(n - 1);
}

int main()
{
	int n;
	scanf_s("%d", &n);
	if (n >= 0 && n <= 12)
		printf("%d",fibonachi(n));

	return 0;
}