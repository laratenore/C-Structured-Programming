#include <stdio.h>
#include <math.h>

float calculapi(float a, float b, float t, float p)
{
	int i;
	float a1, pi;

	for(i = 0; i < 10; i++){
	a1 = (a+b)/2.0;
	b = sqrt(a*b);
	t = t - (p * pow((a - a1), 2));
	p = 2.0 * p;
	a = a1;

	pi = (pow((a+b),2)/(4 * t));
	}

	return pi;

}

int main(){
	float a, b, t, p;
	a = 1.0;
	b = (1.0/sqrt(2.0));
	t = 1.0/4.0;
	p = 1;
	printf("%.20f\n", calculapi(a, b, t, p));

	return 0;
}