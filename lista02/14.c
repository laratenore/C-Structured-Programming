#include <stdio.h>

int calcula_palindromo(int n, int aux, int inverso)
{
	inverso *= 10;
	inverso += (aux % 10);
	if (inverso == n) return 1;
	if (aux == 0) return 0;
	if (aux != 0) {
		aux /= 10;
		return calcula_palindromo(n, aux, inverso);
	}
	
}

int main()
{
	int n, aux, resposta;

	scanf("%d", &n);
	aux = n;
	resposta = calcula_palindromo(n, aux, 0);

	if (resposta != 0) {
		printf("Sim\n");
	} else {
		printf("Não\n");
	}
}