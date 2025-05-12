#include <stdlib.h>
#include <stdio.h>

#define N 10;

void selectionSort(int* list, int size);

int main(){

  int list[N], i;
  
  for(i = 0; i < N; i++){
    list[i] = N - i;
    printf("%d\n", list[i]);
  }
  
  selectionSort(list, N);

  printf("------------\n");
  
  for(i = 0; i < N; i++){
    printf("%d\n", list[i]);
  }

  return 0;
}

void selectionSort(int* list, int size){

}
