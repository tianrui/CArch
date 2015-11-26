#include <stdio.h>

#define ARRAY_SIZE 4096

static int bigA[ARRAY_SIZE];
int main(void) {
    int i, j, k;
    for (i = 0; i < ARRAY_SIZE; i++) {
        bigA[i] = i;
        k = (bigA[i] + bigA[i+1])/2;
    }
    printf("Results %d %d\n", bigA[-1], k);
    return 0;
}
