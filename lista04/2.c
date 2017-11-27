#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct cronometro{
	float min, sec, dec;
} cronometro;

void calcula(float t11, float t22)
{
	cronometro resp;
	int sub;

	sub = (t22-t11)*100;
	if(sub%10 == 0){
		sub /= 10;
		resp.min = sub/6000;
		resp.sec = (sub%6000)/10;
		resp.dec = (sub%6000)%10;
		if(sub < 0){
			printf("%.0fm %.0fs 0%.0f\n", resp.min*(-1), resp.sec*(-1), resp.dec*(-1));
		}
		else{
			printf("%.0fm %.0fs 0%.0f\n", resp.min, resp.sec, resp.dec);
		}
	}
	else{

		resp.min = sub/6000;
		resp.sec = (sub%6000)/100;
		resp.dec = (sub%6000)%100;

		if(sub < 0){
			printf("%.0fm %.0fs %.0f\n", resp.min*(-1), resp.sec*(-1), resp.dec*(-1));
		}
		else{
			printf("%.0fm %.0fs %.0f\n", resp.min, resp.sec, resp.dec);	
		}
	}	
}

float transforma(cronometro *ti)
{
	float t;
	t = ti->sec;
	t += ti->min * 60;
	t += ti->dec / 100.0;

	return t;
}

int main(){
	float t11, t22;
	cronometro t1;
	cronometro t2;
	scanf("%fm %fs %f", &(t1.min) , &(t1.sec) , &(t1.dec));
	scanf("%fm %fs %f", &(t2.min) , &(t2.sec) , &(t2.dec));
	t11 = transforma(&t1);
	t22 = transforma(&t2);

	calcula(t11, t22);
	return 0;
}