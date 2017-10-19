/*

 */

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    // Direction
    int dir = 1;
    int cnt = 1;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (dir > 0) {
                printf("/");
            } else {
                printf("\\");
            }

            if (cnt % 3 == 0) {
                dir *= -1;
            }
            cnt++;

        }
        printf("\n");
    }
}
