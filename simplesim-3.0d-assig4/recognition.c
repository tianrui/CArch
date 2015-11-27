#include <stdio.h>
#include <math.h>
#include <assert.h>

int floyd(int pat[], int x0, int size) {
    int t, h, mu, lam;
    t = x0;
    h = x0+1;
    while (pat[t] != pat[h]) {
        t++;
        h+=2;
    }
    mu = 0;
    t = x0;
    h++;
    while (pat[t] != pat[h]) {
        t++;
        h++;
        mu++;
    }

    lam = 1;
    h = t+1;
    while (pat[t] != pat[h]) {
        h++;
        lam++;
    }

    printf("lam mu %d %d\n", lam, mu);   
    printf("next prediction %d\n", pat[size-lam]);
    if (lam <= size/2)
        return pat[size-lam];
    else
        return NAN;

} 

// Recognize a pattern stored from newest to oldest and output a prediction
// for the next one
int recognition(int *pat, int size) {
    //store indices of pointers into a markov graph
    
    int *ans, a, b, lam, mu;
    a = 0;
    b = 1;
    lam = 0;
    mu = 0;

    while(b<size && pat[a] != pat[b++]);
    mu = b-a;
    int i;

    return 0; 
}

int main() {
    int array[11] = {2, 0, 6, 3, 1, 6, 3, 1, 6, 3, 1 };
    int *pat = &array;
    //recognition(pat, 10);
    floyd(array, 0, 11);
}
