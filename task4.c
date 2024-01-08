#include <stdio.h>

// blah blah blah i am not a human even.

int main() {
    int m, n;
    printf("Vvedit kil`kist` ryadkiv M ta stovpciv N ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int count = 1; 
//6
    for (int i = 0; i < m; i++) {
        // Perevyriaemo chu ruhatysa vlivo abo vpravo
        if (i % 2 == 0) {
            // Vpdavo y parnyh ryadkah
            //3
            for (int j = 0; j < n; j++) {
                matrix[i][j] = count++;
            }
        } else {
            // Vlivo y neparnyh ryadkax
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = count++;
            }
        }
    }

    // Vyvydenna matricy na ekran
    printf("Otrymana matryca zmiykoy:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}