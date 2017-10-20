#include <stdio.h>

int parimpar(int n)
{
	if (n%2==0) return 0;

	else{
		return 1;
	}

}

int main(){
	int n;
	printf("Entre com o número inteiro\n");
	scanf("%d", &n);
	printf("%d\n", parimpar(n));
	
	return 0;
}