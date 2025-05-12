#include <stdio.h>
#include <stdlib.h>

#define N 10

void bubbleSort(int* list, int size);

int main(){

  int list[N], i;
  
  for(i = 0; i < N; i++){
    list[i] = N - i;
    printf("%d\n", list[i]);
  }
  
  bubbleSort(list, N);

  printf("------------\n");
  
  for(i = 0; i < N; i++){
    printf("%d\n", list[i]);
  }
  
  
  return 0;
}

void bubbleSort(int* list, int size){
  int i, j, aux;

  for(i = (size - 1); !(i<0); i--){
    for(j = 0; j < i; j++){
      if(list[j] > list[j+1]){
        aux = list[j];
        list[j] = list[j+1];
        list[j+1] = aux;
      }
    }
  }
}
