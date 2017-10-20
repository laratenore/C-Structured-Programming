#include <stdio.h>
#include <math.h>

int mdc(int a, int b, int menor)
{
	if ((a%menor == 0) && (b%menor == 0)) {
		return menor;
	}
	else{
		menor--;
		return mdc(a, b, menor);
	}
}

int func1(int a, int b)
{
	int x, y, menor;
	x = a;
	y = b;
	if (x > y){
		menor = y;
	}
	else{
		menor = x;
	}
	return mdc(a, b, menor);

}


int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", func1(a, b));
	return 0;
}