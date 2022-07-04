// #include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#include "data_process.h"
int check_u_int();

int main() {
  double *data;
  int n;

  n = check_u_int(&n);
  printf("N - %d", n);
  data = calloc(n, sizeof(double));
  // Don`t forget to allocate memory !

  input(data, n);

  if (normalization(data, n))
    output(data, n);
  else
    printf("ERROR");
}
