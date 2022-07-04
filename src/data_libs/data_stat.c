#include "data_stat.h"

#include <math.h>
#include <stdio.h>

double max(double *data, int n) {
  double max = 0;
  max = data[1];
  for (int i = 0; i < n; i++) {
    if (data[i] > max) {
      max = data[i];
    }
  }
  printf("MAX - %lf", max);
  return max;
}
double min(double *data, int n) {
  double min = 0;
  min = data[1];
  for (int i = 0; i < n; i++) {
    if (data[i] > min) {
      min = data[i];
    }
  }

  printf("MIN - %lf", min);
  return min;
}

double mean(double *data, int n) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += data[i];
  }
  return sum / n;
}

double variance(double *data, int n) {
  int i;
  double average, sum = 0;

  for (i = 0; i < n; i++) {
    sum += data[i];
  }
  average = sum / n;
  sum = 0;
  for (i = 0; i < n; i++) {
    sum += pow((data[i] - average), 2);
  }
  return sum / n;
}