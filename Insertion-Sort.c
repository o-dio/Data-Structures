#include <stdio.h>
#include <stdlib.h>

#define N 10

void insertionSort(int* list, int s);

int main(){

  int list[N], i;
  
  for(i = 0; i < N; i++){
    list[i] = N - i;
    printf("%d\n", list[i]);
  }
  
  insertionSort(list, N);

  printf("------------\n");
  
  for(i = 0; i < N; i++){
    printf("%d\n", list[i]);
  }
  
  return 0;
}

void insertionSort(int* list, int s){

  int i, j, box;

  for(i = 1; i < s; i++){
    j = i-1;
    box = list[i];
    while(!(j<0) && (list[j] > box)){
      list[j+1] = list[j];
      j--;
    }
    list[j+1] = box;
  }
}
