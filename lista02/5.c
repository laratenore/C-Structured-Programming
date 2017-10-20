#include <stdio.h>
#include <math.h>

double fatorial (int x)
{
  	if (x==0 || x==1) {
   	 	x=1;
  	 }
  	else {
  		for (int i=(x-1); i!=0; i--) {
  			x *= i;
  		}
   	 }
   	return x;
}

double binomio(int n, int k)
{
	double num, den;
	num = fatorial(n);
	den = (fatorial(k))*(fatorial(n-k));
	return (num/den);
}

int main(){
	int n, k;
	double resp;
	scanf("%d %d", &n, &k);
	resp = binomio(n, k);
	printf("%.0lf\n", resp);

	return 0;
}