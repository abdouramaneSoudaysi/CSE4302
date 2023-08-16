#include <stdio.h>

int main() {
    int nombre;
    unsigned long long factoriel = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
    } else {
        for (int i = 1; i <= nombre; i++) {
            factoriel *= i;
        }
        printf("Le factoriel de %d est %llu\n", nombre, factoriel);
    }

    return 0;
}

