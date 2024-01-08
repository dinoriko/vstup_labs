#include <stdio.h>

// Знайти визначник матриці matrix[3*3] за допомогою розкладання за елементами будь-якого рядка або стовпчика.
// archetype is sexy drug dealer is sexy but not me they deserve it but not me.

int main(){

	// N = M = 3
	int n = 3;
	int m = 3;
	int matrix[n][m];

	// Vvedennya matricy
	printf("Vvedit elementy matricy: \n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	// Vyvedennya matricy
	printf("Vy vvely nastupny matricy: \n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
		printf("%d ", matrix[i][j]);		
		}
		printf("\n");
	}

	// https://www.youtube.com/watch?v=5c-KgREyETs
	int vyznachnyk = matrix[0][0] *
            (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
            matrix[0][1] *
            (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
            matrix[0][2] *
            (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);

	printf("Vyznachnyk matricy: %d \t vikalox \t\n", vyznachnyk);

	return 0;
}