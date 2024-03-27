#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bubble Sort
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

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    clock_t startTime, endTime;
    int n = 10000; // Ukuran arr 
    int *arr_bubble = (int *)malloc(n * sizeof(int));
    int *arr_quick = (int *)malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr_bubble[i] = rand();
        arr_quick[i] = arr_bubble[i];
    }
    
    // Bubble Sort
    startTime = clock();
    bubbleSort(arr_bubble, n);
    endTime = clock();
    printf("Time taken by Bubble Sort: %f seconds\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);
    
    // Quick Sort
    startTime = clock();
    quickSort(arr_quick, 0, n - 1);
    endTime = clock();
    printf("Time taken by Quick Sort: %f seconds\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);
    
    free(arr_bubble);
    free(arr_quick);
    
    return 0;
}
