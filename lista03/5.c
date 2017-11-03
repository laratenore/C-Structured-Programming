#include <stdio.h>
#include <stdlib.h>

int calc_repet(int *vet, int tam, int i)
{
    int next, last, cont1 = 0, cont2 = 1;

    if (i == tam) return 0;

    last = i - 1;
    next = i + 1;

    while (last >= 0) {
        
        if (vet[i] == vet[last]) {

            cont1++;
        }

        last--;
    }
    if (cont1 == 0) {
        while (next < tam) {
            if (vet[i]  == vet[next]) {

                cont2++;
            }

            next++;
        }
        if (cont2 != 1) {
            printf("%d-%d\n", vet[i], cont2);
        }
    }

    i++;

    calc_repet(vet, tam, i);
}

int main()
{
    int tam, i;
    int * vet;


    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int)); 

    
    for (i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }
    
    calc_repet(vet, tam, 0);
    
    return 0;
}