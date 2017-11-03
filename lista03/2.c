#include <stdio.h>
#include <stdlib.h>
int tamanho_string(char string[])
{
	int i = 0;
	while(string[i]){
		i++;
	}
	return i;
}

int inverte(char v[], int tam)
{
	char * inv;
	int aux = tam - 1;
	int i;
	inv = malloc(tam * sizeof(char));
	for(i = 0; i < tam; i++){
		inv[aux] = v[i];
		aux--;
	}

	printf("%s\n", inv);
	return 0;
}

int main(){
	int tam;

	char string [255]; 
	fgets(string, 255, stdin);

	tam = tamanho_string(string);

	inverte(string, tam);

	return 0;
}