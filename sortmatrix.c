#include <stdio.h>
#include <stdlib.h> // untuk malloc dan free
#include <time.h>

int main() {
    clock_t startTime = clock();
    
    int **matrix; 
    int len = 10000; 
    
  
    matrix = (int **)malloc(len * sizeof(int *));
    for (int i = 0; i < len; i++) {
        matrix[i] = (int *)malloc(len * sizeof(int));
    }
  
    // Inisialisasi matriks
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (j <= i) {
                matrix[i][j] = j + 1; 
            } else {
                matrix[i][j] = 0; 
            }
        }
    }

    // Mencetak matriks
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (matrix[i][j] != 0) {
                printf("%d", matrix[i][j]);               
            } else {
                printf(" ");
            }   
        }
        printf("\n");
    }

  
    for (int i = 0; i < len; i++) {
        free(matrix[i]);
    }
    free(matrix);

    double elapsed_time = (double)(clock() - startTime) / CLOCKS_PER_SEC;
    printf("Done in %f seconds\n", elapsed_time);
    
    return 0;
}
