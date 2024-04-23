#include <stdio.h>

// 0 (não pediram mas fiz p ajudar nos meus testes)

int ler_matriz(int col, int row, int matriz[col][row]) {
	for(int i = 0; i < col; i++) {
		for(int j = 0; j < row; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int limpa_matriz(int col, int row, int matriz[col][row]) {
	for(int i = 0; i < col; i++) {
		for(int j = 0; j < row; j++) {
			matriz[i][j] = 0;
		}
	}
}

// 1

int ler_arquivo(int col, int row, int matriz[col][row]) {
	FILE* f=fopen("misto.txt", "r+t");
	if(f == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
	for(int i = 0; i < col; i++) {
		for(int j = 0; j < row; j++) {
			fscanf(f, "%d", &matriz[i][j]);
		}
	}
}

// 2

float media_matriz(int n, int matriz[n][n]) {
	float soma = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			soma += matriz[i][j];
		}
	}
	return soma/(n*n);
}

// 3

void identidade(int n, int matriz[n][n]) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (i == j) {
				matriz[i][j] = 1;
			} else {
				matriz[i][j] = 0;
			}
		}
	}
}

// 4 

void transposta(int n, int matriz[n][n], int matriz2[n][n]) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			matriz2[j][i] = matriz[i][j];
		}
	}
}

// 5

int simetrica(int n, int matriz[n][n]) {
	int matriz2[n][n];
	transposta(n, matriz, matriz2);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (matriz[i][j] != matriz2[i][j]) {
				return 0;
			}
		}
	}
	return 1;
}

// 6

void somar_matriz(int n, int matriz[n][n], int matriz2[n][n], int matriz3[n][n]) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			matriz3[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
}

// 7

void produto_matriz(int n, int matriz[n][n], int matriz2[n][n], int matriz3[n][n]) {
	limpa_matriz(n,n, matriz3);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++) {
				matriz3[i][j] += matriz[i][k] * matriz2[k][j];
			}
		}
	}
}
