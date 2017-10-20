#include <stdio.h>

float descontos(int cargo, int faltas)
{
	float desconto, salario;
	if (cargo == 1){
			salario=10000;
	}
	else if (cargo == 2){
			salario=8000;
	}		
	else if (cargo == 3){
			salario=5000;
	}	
	else if (cargo == 4){
			salario=3000;
	}
	else if (cargo == 5){
			salario=2000;
	}

	desconto = salario/20;
	desconto *= faltas;
	return desconto;
}

float acrescimos(int cargo, int horas) 
{
	float acrescimo, salario, diasalario;
	if (cargo == 1){
			salario=10000;
	}
	else if(cargo == 2){
			salario=8000;
	}
	else if(cargo == 3){
			salario=5000;
	}
	else if(cargo == 4){
			salario=3000;
	}
	else if(cargo == 5){
			salario=2000;
	}
	
	diasalario = salario/20;
	diasalario /= 8;
	acrescimo = (diasalario+40)*horas;
	return acrescimo;
}

float total(int cargo, int faltas, int horas)
{
	float total, salario;
	if (cargo == 1){
			salario=10000;
	}
	else if(cargo == 2){
			salario=8000;
	}
	else if(cargo == 3){
			salario=5000;
	}
	else if(cargo == 4){
			salario=3000;
	}
	else if(cargo == 5){
			salario=2000;
	}
	total = salario;
	total -= descontos(cargo, faltas);
	total += acrescimos(cargo, horas);
	return total;
}

int main() {
	int cargo, faltas, horas_extras;
	scanf("%d %d %d", &cargo, &faltas, &horas_extras);
	printf("%.0f\n", total(cargo, faltas, horas_extras));
}