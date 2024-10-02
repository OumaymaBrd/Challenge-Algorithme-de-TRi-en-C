#include <stdio.h>

void fusionner(int arr[], int gauche, int milieu, int droite) {
    int i, j, k;
    int n1 = milieu - gauche + 1;
    int n2 = droite - milieu;

    int gaucheArr[n1], droiteArr[n2];

    // Copie des données dans les tableaux temporaires
    for (i = 0; i < n1; i++)
        gaucheArr[i] = arr[gauche + i];
    for (j = 0; j < n2; j++)
        droiteArr[j] = arr[milieu + 1 + j];

    i = 0; // Index initial du premier s-tableau
    j = 0; // Index initial du second s-tableau
    k = gauche; // Index initial du tableau fusionné

    // Fusion des tableaux temporaires dans arr[]
    while (i < n1 && j < n2) {
        if (gaucheArr[i] <= droiteArr[j]) {
            arr[k] = gaucheArr[i];
            i++;
        } else {
            arr[k] = droiteArr[j];
            j++;
        }
        k++;
    }

    // Copie des éléments restants de gauche
    while (i < n1) {
        arr[k] = gaucheArr[i];
        i++;
        k++;
    }

    // Copie des éléments restants de droite
    while (j < n2) {
        arr[k] = droiteArr[j];
        j++;
        k++;
    }
}

void triParFusion(int arr[], int gauche, int droite) {
    if (gauche < droite) {
        int milieu = gauche + (droite - gauche) / 2;

        // Tri des deux moitiés
        triParFusion(arr, gauche, milieu);
        triParFusion(arr, milieu + 1, droite);

        // Fusionner les deux moitiés triées
        fusionner(arr, gauche, milieu, droite);
    }
}

void afficherTableau(int arr[], int taille) {
    for (int i = 0; i < taille; i++)
        printf("%d | ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int taille = sizeof(arr) / sizeof(arr[0]);
  printf("\t\t Tri Rapide : Tri Fusion\n\n");
	
    printf("Tableau avant le tri : ");
    afficherTableau(arr, taille);

    triParFusion(arr, 0, taille - 1);

    printf("Tableau apres le tri : ");
    afficherTableau(arr, taille);

    return 0;
}

