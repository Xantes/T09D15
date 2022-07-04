#include "data_io.h"

#include <stdio.h>

void input(double *data, int n) {
  double tmp;
  for (int i = 0; i < n; i++) {
    if (scanf("%lf", &tmp) == 1) {
      data[i] = tmp;
      printf("%lf ", data[i]);
    }
  }
}

void output(double *data, int n) {
  for (int i = 0; i < n; i++) {
    printf("%.2lf ", data[i]);
  }
}

int check_u_int() {
  double tmp;
  char ch;
  int tmp_int;
  int result;
  if (scanf("%lf%c", &tmp, &ch) == 2) {
    tmp_int = tmp;
    if ((tmp == tmp_int) && (tmp_int > 0) && (ch == '\n')) {
      result = tmp;
    } else {
      result = 0;
    }
  } else {
    result = 0;
  }
  return result;
}