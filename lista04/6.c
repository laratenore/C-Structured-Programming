#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

void f1(ulint x, ulint y)
{
	if(x>y){
		printf("Maior: %lu. Menor %lu\n", x,y);
	}
	else{
		printf("Maior: %lu. Menor %lu\n", y,x);
	}
}

void f2(ulint x, ulint y)
{
	int i = 0;
	int ctr = x ^ y; //
	//Conta o numero de bits no numero
	while(ctr != 0){
		i++;
		ctr = ctr >> 1;
	}
	if((x >> (i-1)) & 1) printf("Maior: %lu. Menor %lu\n", x,y);
	else printf("Maior: %lu. Menor %lu\n", y,x);

}

int main(void){
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint x, y;

	scanf("%lu", &x);
	scanf("%lu", &y);
	tempo_init = clock();
	f1(x, y);
	tempo_fim = clock();

	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
	f2(x, y);
	tempo_fim = clock();

	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}