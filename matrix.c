#include <stdio.h>
#include <time.h>

int main() {
    clock_t startTime = clock();
    
    int matrix[10000][10000];
    int len = sizeof(matrix)/sizeof(matrix[0]);
  
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

    double elapsed_time = (double)(clock() - startTime) / CLOCKS_PER_SEC;
    printf("Done in %f seconds\n", elapsed_time);
    
    return 0;
}
