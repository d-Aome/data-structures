#include "recursion/Recursion.h"
#include <cstdio>
#include <unistd.h>

int j;
/**
 * @brief
 *
 * @param n
 */
void fun(int n) {
  if (n > 0) {
    printf("%d", n);
    j = 12;
    fun(n - 1);
    fun(n - 1);
  }
}

void funA(int n) {
  if (n > 0) {
    printf("%d", n);

    funB(n - 1);
  }
}

void funB(int n) {
  if (n > 1) {
    printf("%d\n", n);
    fun(n / 2);
  }
}

void funC(int n) {
  if (n > 0) {
    printf("%d", n);
    funB(n - 1);
  }
  j = 10;
}

void funD(int n) {

  if (n > 1) {
    printf("%d\n", n);
    funC(n / 2);
  }
}
