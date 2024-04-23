#include <stdio.h>
#include <math.h>

// 1

void arquivo_em_array() {
	int numeros[1000];
	FILE* f = fopen("numeros.txt", "r");
    if (f==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
	int j = 0;
	int i = 0;
    while(!feof(f)) {
        fscanf(f, "%d", &i);
        numeros[j] = i;
        j++;
    }
    numeros[j] = -1;
    fclose(f);
}

// 2 

float media_do_array(float n[]) {
	int i = 0;
	float s = 0;
	while(n[i] != -1) {
		s += n[i];
		i++;
	}
	return (s/(i));
}

// 3

float variancia_da_array(float n[]) {
	float soma = 0;
	float media = media_do_array(n);
	int i = 0;
	while(n[i] != -1) {
		soma += pow((n[i] - media), 2);
		i++;
	}
	return sqrt(soma/(i-2));
	
}


// 4

int maximo_do_array(int n[]) {
	int max = n[0];
	int i = 0;
	while(n[i] != -1) {
		if (n[i] > max) {
			max = n[i];
		}
		i++;
	}
	return max;
}

// 5

int minimo_do_array(int n[]) {
	int min = n[0];
	int i = 0;
	while(n[i] != -1) {
		if (n[i] < min) {
			min = n[i];
		}
		i++;
	}
	return min;
}

// 6

int produto_escalar(int n[], int m[]) {
	int i = 0;
	int s = 0;
	while(n[i] != -1) {
		s += n[i] * m[i];
		i++;
	}
	return s;
}
