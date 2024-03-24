#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Dime cuantos numeros quieres ordenar: ");
    scanf("%d", &n);
    int arreglo[n];
    printf("Dime numeros para el metodo de burbuja, pero no mas de 100 para el final entrar 'x': ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
    bubbleSort(arreglo, n); // Исправлено на bubbleSort
    printf("Los numeros ordenados son: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Dime cuantos numeros quieres ordenar: ");
    scanf("%d", &n);
    int arreglo[n];
    printf("Dime numeros para el metodo de burbuja, pero no mas de 100 para el final entrar 'x': ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
    bubbleSort(arreglo, n); // Исправлено на bubbleSort
    printf("Los numeros ordenados son: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    return 0;
}

