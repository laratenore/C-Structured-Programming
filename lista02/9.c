#include <stdio.h>

int potencia(int x, int y, int parcial)
{
	if(y==0) return 0;
	else if(y==1) return parcial;

	else{
		parcial *= x;
	}
	return potencia(x, (y-1), parcial);

}

int main(){
	int x, y, parcial;
	scanf("%d %d", &x, &y);
	parcial = x;
	printf("%d\n", potencia(x, y, parcial));

	return 0;
}