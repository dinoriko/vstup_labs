#include <stdio.h>
#include <limits.h>


int main(){

// Za zavdannam ya may masiv 3 * 5
int n = 3;
int m = 5;
int matrix[n][m];

// Vvod masivy

printf("Vvedit elementy matricy: \n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

printf("Vy vvely matricy: \n");
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

// Tymchasova zminna
int temp = 0;

    // Sortuemo elementy 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m - 1; j++){
            for (int k = 0; k < m - j - 1; k++){
                if (matrix[i][k] < matrix[i][k + 1]){
                    // Zamina elementiv miscyami
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }

    printf("\n Sortovana matrica: \n");
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}