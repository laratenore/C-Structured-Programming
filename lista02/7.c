#include <stdio.h>
#include <math.h>

float num(int op2, int op3, int n) 
{
	int y;
	int pot = 1;

	if ((op2 == 1) && (op3 == 2)) {
		//decimal para binario
		y = 0;

		while(n > 0){
			y += (n%2) * pot;
			n /= 2;
			pot *= 10;
		}

	}
	else if (op2 == 2 && op3 == 1) {
		y = 0;
		while(n > 0){
			y += (n%10) * pot;
			n /= 10;
			pot *= 2;
		}
	}
	else if (op2 == 1 && op2 == 1) {
		//decimal
		y = n;
	}
	else if (op2 == 2 && op2 == 2) {
		//binario
		y = n;
	}

	return y;
}

float temp(int op2, int op3, float n)
{
	float x;

	if (op2 == 1 && op3 == 2) {
		// celcius para Fahrenheit
		x = ((9 * n)/5) + 32;
	}
	else if (op2 == 2 && op3 == 3) {
		// Fahrenheit para Kelvin
		x = (n + 459.67)/1.8;
	}
	else if ( op2 == 1 && op3 == 3) {
		// celcius para Kelvin
		x = n + 273;
	}
	else if (op2 == 2 && op3 == 1) {
		// Fahrenheit para celcius
		x = (5 * (n - 32))/9;
	}
	else if (op2 == 3 && op3 == 1) {
		// kelvin para celcius
		x = n - 273;
	}
	else if (op2 == 3 && op3 == 2) {
		// kelvin para Fahrenheit
		x = (n * 1.8) - 459.67;
	}
	else if (op2 == 1 && op3 == 1) {
		// Celcius
		x = n;
	}
	else if (op2 == 2 && op3 == 2) {
		// Fahrenheit
		x = n;
	}
	else if (op2 == 3 && op3 == 3) {
		// Kelvin
		x = n;
	}

	return x;
}

int main(){
	int op1, op2, op3;
	float n;
	scanf("%d %d %d %f", &op1, &op2, &op3, &n);

	if (op1 == 1) {
	  if (op3 == 1){
		  printf("%.2f C\n", temp(op2, op3, n));
	  }
	  else if (op3 == 2) {
	    printf("%.2f F\n", temp(op2, op3, n));
	  }
	  else{
	    printf("%.2f K\n", temp(op2, op3, n));
	  }
	}
	
else if (op1 == 2) {
  printf("%.0f\n", num(op2, op3, n));
	  
}


	return 0;
}