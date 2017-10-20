#include <stdio.h>
#include <math.h>

double volume(float a, float b, float c)
{
	float volume;
	volume = (a * b) * c;
	return volume;
}

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.2f\n", volume(a,b,c));
}