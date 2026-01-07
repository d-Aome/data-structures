#include "recursion/Recursion.h"
#include <cstdio>
#include <unistd.h>

int j;
/**
 * @brief
 *
 * @param
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

int nestedRecursion(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return nestedRecursion(nestedRecursion(n + 11));
    }
}

int sum(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sum(n - 1);
}

int sumLoop(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}
int sumFormula(int n) { return n * (n + 1) / 2; }

int rFactorial(int n) {}
