#include <stdio.h>
#include <math.h>
float soma(float x, float y)
{
	return (x+y);
}
float subtracao(float x, float y)
{
	return (x-y);
}
float multiplicacao(float x, float y)
{
	return (x*y);
}
float divisao(float x, float y)
{
	return (x/y);
}
float potenciacao(float x, float y)
{
	return (pow(x,y));
}

int main(){
	int op;
	float x, y, resp;
	scanf("%d %f %f", &op, &x, &y);
	
	if (op==1) {
		resp = soma(x,y);

	}
	else if (op==2) {
		resp = subtracao(x,y);

	}
	else if (op==3) {
		resp = multiplicacao(x,y);

	}
	else if (op==4) {
		resp = divisao(x,y);

	}
	else if (op==5) {
		resp = potenciacao(x,y);

	}
	printf("%.0f\n", resp);

	return 0;
}