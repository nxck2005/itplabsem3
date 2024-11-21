#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m, n; // m = rows, n = columns
	printf("Rows: ");
	scanf("%d", &m);
	printf("Columns: ");
	scanf("%d", &n);

	int** mat1 = (int**)malloc(m * sizeof(int));
	int** mat2 = (int**)malloc(m * sizeof(int));
	if (mat1 && mat2) { // If block m; i++) {
		for (int i = 0; i < m; i++) {
			mat1[i] = (int*)malloc(n * sizeof(int));
			mat2[i] = (int*)malloc(n * sizeof(int));
		}
	} else {
		printf("Failure to allocate blocks of memory!\n");
		return 1;
	}

	printf("MAT1\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("MAT1[%d][%d]? ", i, j);
			scanf("%d", &(*(*(mat1 + i) + j)));
		}
	}
	printf("MAT2\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("MAT2[%d][%d]? ", i, j);
			scanf("%d", &(*(*(mat2 + i) + j)));
		}
	}
	printf("Resultant matrix: \n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d	", (*(*(mat1 + i) + j)) +  (*(*(mat2 + i) + j)));
		}
		printf("\n");
	}
	for (int i = 0; i < m; i++) {
		free(*(mat1 + i));
		free(*(mat2 + i));
	}
	free(mat1);
	free(mat2);
}