#include <stdio.h>
#include <math.h>

int decbin(int binario, int n, int pot) 
{
	if (n<=0) return binario;
	else{
		binario += (n%2) * pot;
		n /= 2;
		pot *= 10;

		return decbin(binario, n, pot);

	}
}

int bindec(int decimal, int n, int pot)
{
	
	if (n <= 0) return decimal;
	else{
		decimal += (n%10) * pot;
		n /= 10;
		pot *=2;

		return bindec(decimal, n, pot);
	}	
}



int main(){
	int op, n;
	int pot = 1;
	int decimal = 0;
	int binario = 0;
	
	scanf("%d %d", &n, &op);

	if (op == 1){
		printf("%d\n", decbin(binario, n, pot));
	}
	else if (op == 2){
		printf("%d\n", bindec(decimal, n, pot));
	}


	return 0;
}