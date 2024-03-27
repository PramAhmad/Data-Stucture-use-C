#include <stdio.h>
#include <time.h>
int main(){
    clock_t startTime = clock();
   int matrix[100][100];

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            matrix[i][j] = j+1;
        }
        for (int j = i + 1; j < 100; j++)
        {
            matrix[i][j] = 0;
        }
    }


    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if(matrix[i][j] == 0){
                printf(" ");
            }else{
                printf("%d", matrix[i][j]);
            }
        }
        printf("\n");
    }
     double elapsed_time = (double)(clock() - startTime) / CLOCKS_PER_SEC;
  printf("Done in %f seconds\n", elapsed_time);
    return 0;
} 