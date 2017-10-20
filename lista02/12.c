#include <stdio.h>
#include <math.h>

double fatorial (int x, int p)
{
	if (x==0 || x==1) return p;
  	else {
  		p *= x;
  		x--;
  		return fatorial(x, p);
  	}
}

double binomio(int n, int k) 
{
	double num, den;
	num = fatorial(n, 1);
	den = (fatorial(k,1))*(fatorial((n-k),1));
	return (num/den);
}

int main () {

	int n, k;
	double resp;
	scanf("%d %d", &n, &k);
	resp = binomio(n, k);
	printf("%.0lf\n", resp);

	return 0;
}