#include <stdio.h>
#include <math.h>

float delta(int a, int b, int c)
{
	double d;
	d = (pow(b, 2))-(4 * a * c);
	return d;
}

float resp1(int a, int b, int c)
{
	double x;
	x = ((b*(-1))-(sqrt(delta(a, b, c))))/(2*a);
	return x;
}

float resp2(int a, int b, int c)
{
	double y;
	y = ((b*(-1))+(sqrt(delta(a, b, c))))/(2*a);
	return y;
}

int main(){
	int a, b, c;
	float res1, res2;
	scanf("%d %d %d", &a, &b, &c);
	res1 = resp1(a, b, c);
	res2 = resp2(a, b, c);
	printf("%.3f %.3f\n", res1, res2);
	return 0;
}