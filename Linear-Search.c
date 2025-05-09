#include <stdio.h>
#include <stdlib.h>

#define N 10

int* linearSearch(int* list);

int main(){

  int list[N], i;

  for(i = 0; i < N; i++){
    list[i] = N - i;
  }
  
  linearSearch(list);
  
  return 0;
}

int* linearSearch(int* list){

  int size = sizeof(list)/sizeof(int);
  
  printf("%d", size);

  return list;
}
