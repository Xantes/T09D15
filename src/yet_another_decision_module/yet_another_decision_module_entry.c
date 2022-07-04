#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "decision.h"

int main() {
  double *data;
  int n;

  n = check_u_int();

  data = calloc(n, sizeof(double));
  input(data, n);

  if (make_decision(data, n))
    printf("YES");
  else
    printf("NO");
}
