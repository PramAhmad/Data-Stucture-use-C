#include <stdio.h>

int main(){
//   queue in c
    int queue[100];
    int front = -1, rear = -1;
    int n;

    printf("masukan jumlah antrian");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int x;
        printf("masukan antrian ke-%d: ", i+1);
        scanf("%d", &x);
        if(front == -1 && rear == -1){
            front = rear = 0;
            queue[rear] = x;
        }else{
            rear++;
            queue[rear] = x;
        }

        printf("antrian ke-%d adalah %d\n", i+1, queue[i]);
        

    }
}