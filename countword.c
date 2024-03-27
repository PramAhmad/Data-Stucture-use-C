#include <stdio.h>

int main(){
    int char_count = 1;
    char c;
  
    printf("masukan kata");
    scanf("%c", &c);
    while((c = getchar()) != '.'){
        char_count++;
       
    }
        printf("%d", char_count);
    
}