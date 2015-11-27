#include <stdio.h>

#define ARRAY_SIZE 4096*32

void forward_loop() {
    int i, j, k;

    int *bigA = (int*)malloc(sizeof(int)*ARRAY_SIZE);
    for (i = 0; i < ARRAY_SIZE; i++) {
        bigA[i] = i;
        k = (bigA[i] + bigA[i+1])/2;
    }
    printf("Results %d %d\n", bigA[-1], k);
    free(bigA); 
}

void backward_loop() {
    int i, j, k;
    int *bigA = (int*)malloc(sizeof(int)*ARRAY_SIZE);
    
    for (i = ARRAY_SIZE; i > 0; i--) {
        bigA[i] = i;
        k = (bigA[i] + bigA[i+1])/2;
    }
    printf("Results %d %d\n", bigA[-1], k);
    free(bigA); 
}
int main(void) {
    //next line would prefetch for forward loop but not for backward
    forward_loop();
    backward_loop();
    return 0;
}
