#include <stdio.h>

void countingSort(int arr[], int size) {
    // chercher: valeur maximale dans le tableau
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1];  
    for (int i = 0; i <= max; i++) {
        count[i] = 0;  // Initialiser le tableau à 0
    }

    // Remplir le tableau de comptage
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Remplir le tableau trié en fonction du tableau de comptage
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau avant le tri :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    countingSort(arr, size);

    printf("\nTableau apres le tri :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

