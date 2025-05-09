#include <stdio.h>
#include <stdlib.h>

#DEFINE 10 N

int* linearSearch(int* list);

int main(){

  int list[N], i;

  for(i = 0; i < N; i++){
    list[i] = N - i;
  }
  
  linearSearch(list);
  
  return 1;
}

int* linearSearch(int* list){

  int size = sizeof(list)/sizeof(int);
  
  printf("%d", size);

  return list;
}
