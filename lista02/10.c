#include <stdio.h>

int fibMem[1000] = {0};

int fib (int n)
{
	if (n == 0) return 0;
	if (n <= 2) return 1;

	if ((fibMem[n-1] != 0) && (fibMem[n-2] !=0 )) {

		fibMem[n] = fib(n-1) + fib(n-2);

		return fibMem[n];

	} else { 
		//calculando os anteriores para preencher o vetor;
		fibMem[n-2] = fibMem[n-3] + fibMem[n-4];
		fibMem[n-1] = fibMem[n-2] + fibMem[n-3];
		fibMem[n] = fib(n-1) + fib(n-2);

		return fibMem[n];
	}
}

int main()
{
	int n;

	fibMem[1] = 1;
	fibMem[2] = 1;
	
	scanf("%d", &n);
	printf ("%d\n", fib(n));
	
	return 0; 

}