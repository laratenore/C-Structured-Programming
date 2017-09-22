#include <stdio.h>

int main(){
	int valor;
	printf("Entre com o valor");
	scanf("%d",&valor);

	if ((valor%2) ==0) {
		printf("Numero e par\n");
	}else {
		printf("Numero e impar\n");
	}

	return 0;
}
	
	
