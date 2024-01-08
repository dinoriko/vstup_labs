#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// test 

int main(){
	
	// Zadana matrica NxN , N = 10
	// N = M 
	int n = 3;
	int m = 3;
	int matrix[n][m];

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

    // Отримати нову матрицю шляхом множення всіх 
	// елементів даної матриці на її найменший за модулем елемент.

    // Znahodymo naymenshiy element za modulem
	int min_abs = INT_MAX;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			int abs_val = abs(matrix[i][j]);
			if (abs_val < min_abs){
				min_abs = abs_val;
			}
			}
		}

	printf("Naymenshiy element za modulem u matricy: %d\n", min_abs);

	// Otrymannya novoi matricy
	int new_matrix[n][m];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			new_matrix[i][j] = matrix[i][j] * min_abs;
		}
	}

	printf("Nova matrica: \n");

	// Vyvedenna novoi matricy
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d ",new_matrix[i][j]);
		}
		printf("\n");
    }

    return 0;
}