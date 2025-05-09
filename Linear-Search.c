#include <stdio.h>
#include <stdlib.h>

int* linearSearch(int* list);

int main(){

  int* list[5] = [1, 2, 3, 4, 5];

  linearSearch(list);
  
  return 1;
}

int* linearSearch(int* list){

  int size = sizeof(list)/sizeof(int);
  
  printf("%d", size);

  return list;
}
