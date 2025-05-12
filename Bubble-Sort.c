#include <stdio.h>
#include <stdlib.h>

#define N 10

void bubbleSort(int* list, int size);

int main(){

  
  
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
