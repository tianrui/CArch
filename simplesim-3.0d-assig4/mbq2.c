#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 4096*32

int main(void) {
    int *a = (int*)calloc(sizeof(int)*ARRAY_SIZE);
    int *b = (int*)calloc(sizeof(int)*ARRAY_SIZE);
    int *ans = (int*)calloc(sizeof(int)*ARRAY_SIZE);
    
    int i, j, k, l;

    for (i = ARRAY_SIZE; i > 0; i -= 10) {
            a[i] = i;
            k = a[i-10];
            ans[i] = k-l;
    }
    for (j = ARRAY_SIZE; j > 0; j -= 13) {
            a[j] = j;
            l = b[j-13];
            ans[j] = l-k;
    }
    printf("last i: %d, last j: %d\n", ans[i], ans[j]);
    free(a);
    free(b);
    free(ans);
}
