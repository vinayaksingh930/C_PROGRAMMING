#include <stdio.h>

int main() {
    long long T, N;

    scanf("%lld", &T);

    while (T--) {
        scanf("%lld", &N);

        long long i = 1;
        while (i * i <= N) {
            if (i * i == N) {
                printf("Perfect Square\n");
                break;
            }
            i++;
        }
        if (i * i != N) {
            printf("Not a Perfect Square\n");
        }
    }

    return 0;}
