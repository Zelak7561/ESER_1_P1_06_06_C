#include <stdio.h>

void somm(int nTotale, int *sumN);
void sommGauss(int nTotale, int *sumGauss);

int main(void) {
    int sumN, sumGauss, nTotale;

    printf("Inserisci il numero totale: \n");
    scanf("%d", &nTotale);

    somm(nTotale, &sumN);
    sommGauss(nTotale, &sumGauss);
    if(sumN == sumGauss) {
        printf("Sommatoria normale: [%d]\n", sumN);
        printf("SommGauss: [%d]\n", sumGauss);
        printf("-->SOMME UGUALI<-- \n");
    }

    return 0;
}

void somm(int nTotale, int *sum) {
    for (int i = 0; i < nTotale; i++) {
        *sum = *sum + i + 1;
    }
}

void sommGauss(int nTotale, int *sumGauss) {
    *sumGauss = nTotale * (nTotale + 1) / 2;
}
