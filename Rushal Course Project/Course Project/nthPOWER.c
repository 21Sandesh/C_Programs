#include <stdio.h>

int nth_power()
{
    int n, p;
    printf("Number of Rows/Colums of square matrix: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;
    printf("to the power of: ");
    if (scanf("%d", &p) != 1 || p < 0)
        return 1;

    int m[n][n];
    int r[n][n];
    int t[n][n];

    printf("Elements\n");
    for (int b = 0; b < n; b++) {
        for (int d = 0; d < n; d++) {
            printf("[%d][%d] = ", b + 1, d + 1);
            if (scanf("%d", &m[b][d]) != 1)
                return 1;
            r[b][d] = b == d; // initialize r to identity matrix
        }
    }
    for (int i = 0; i < p; i++) {
        for (int b = 0; b < n; b++) {
            for (int d = 0; d < n; d++) {
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += r[b][k] * m[k][d];
                }
                t[b][d] = sum;
            }
        }
        for (int b = 0; b < n; b++) {
            for (int d = 0; d < n; d++) {
                r[b][d] = t[b][d];
            }
        }
    }

    printf("RESULT:\n");
    for (int c = 0; c < n; c++) {
        for (int d = 0; d < n; d++) {
            printf("%3d ", r[c][d]);
        }
        printf("\n");
    }
}
