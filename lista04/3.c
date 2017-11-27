#include <stdio.h>
#include <time.h>
#include <limits.h>

typedef struct data{
	char nome[100];
	float p1, p2, p3, media;
	int ra;
} data;

int main(){
	data data;
	FILE * r, * w;

	r = fopen("lista_alunos.txt", "r");
	w = fopen("media_alunos.txt", "w");

	for(int k=0; k < 50; k++){
		fscanf(r,"%s %d %f %f %f", &data.nome, &data.ra, &data.p1, &data.p2, &data.p3);
		data.media = (data.p1 + data.p2 + data.p3);
		data.media /= 3.0;
		fprintf(w, "%s %04d %.2f %.2f %.2f %.2f\n", data.nome, data.ra, data.p1, data.p2, data.p3, data.media);
	}

	fclose(r);
	fclose(w);

	return 0;
}