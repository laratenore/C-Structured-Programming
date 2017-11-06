#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b){
	
    return ( *(int*) a - *(int*) b);
}

int impar_par(int n)
{
	if (n%2 == 0) return 0;
	else return 1;

}

float mediana(int * vetor, int n)
{
	int q1, q2;
	float mediana;
	q1 = (n/2);
	q2 = (n/2)-1;

	if (impar_par(n)) {
		mediana = vetor[q1];
	}
	else {
		mediana = (vetor[q1] + vetor[q2])/2.00;
	}

	return mediana;

}


int main(){

	int n, i;
	int * vetor;

	//escaneia o tamanho do vetor
	scanf("%d", &n);

	vetor = malloc(n * sizeof(int)); 

	// escaneia o vetor
	for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

	qsort(vetor , n, sizeof(int), cmpfunc);

	printf("%.2f\n", mediana(vetor, n));

	return 0;
}