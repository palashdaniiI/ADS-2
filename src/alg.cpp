// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double a = 1;
  for (int i = 0; i < n; i++) {
    a *= value;
  }
  return a;
}

uint64_t fact(uint16_t n) {
  if ((n == 1) || (n == 0)) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double sum = 0;
  for (int i = 0; i <= count; i++) {
    sum += calcItem(x, i);
  }
  return sum;
}

double sinn(double x, uint16_t count) {
  double a = 0;
  for (int i = count; i > 0; i--) {
    a += pown(-1, i-1) * (pown(x, 2*i-1)/fact(2*i-1));
  }
  return a;
}

double cosn(double x, uint16_t count) {
  double a = 0;
  for (int i = count; i > 0; i--) {
    a += pown(-1, i-1) * (pown(x, 2*i-2)/fact(2*i-2));
  }
  return a;
}
