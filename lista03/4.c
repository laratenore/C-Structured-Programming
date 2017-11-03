#include <stdio.h>

int transposta(int m[][3])
{
	int b, a;

	for (b = 0; b < 3; b++) {

		for (a = 0; a < 3; a++) {
			
			printf("%d ", m[b][a]);
		}

		printf("\n");
	}
	
	return 0;
}

int main()
{
	int mat[3][3], a, b;

	for (a = 0; a < 3; a++) {

		for (b = 0; b < 3; b++) {

			scanf("%d", &mat[b][a]);
		}
	}
	
	transposta(mat);

	return 0;
}