#include <stdio.h>
#include <stdlib.h>

int soma(int v1[], int v2[])
{
	int i;
	int v3[5];

	for(i = 0; i < 5; i++){
		v3[i] = v1[i] + v2[i];
	}

	for(i = 0; i < 5; i++){
		printf("%d ", v3[i]);
	}
	printf("\n");

	return 0;
}


int main(){

	int i;
	int v1[5], v2[5];

	for(i = 0; i < 5; i++){  
    scanf("%d", &v1[i]);
  	}

  	for(i = 0; i < 5; i++){  
    scanf("%d", &v2[i]);
  	}

  	soma(v1, v2);


	return 0;
}