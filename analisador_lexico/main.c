#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARR_SIZE 8

int reduce(int *vet, int ini, int fim){
  printf("%d\n", fim);
  int a = 0, b = 0;
  if(fim - ini >= 2){
    a = reduce(vet, ini, fim/2);
    b = reduce(vet, fim / 2 + 1, fim);
    return a + b;
  } else {
    return vet[ini];
  }
}

int main(){

  int i, j, tid, numt, sum = 0, local_sum;
  double t1, t2;
  int a[ARR_SIZE];

  for(i = 0; i < ARR_SIZE; i++){
    a[i] = rand() % 10;
    printf("%d\n", a[i]);
  }
  sum = reduce(a, 0, ARR_SIZE - 1);
  printf("Soma = %d", sum);

return 0;
}
