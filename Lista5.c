#include <stdio.h>
#include <math.h>

int e_primo(int x) {
    int i = x;
    int c = 0;
    for (i; i > 0; i--) {
        if (x%i == 0) {
            c++;
        }
    }
    if (c == 2) {
        return 1;
    }
    return 0;
}

int primo(int x) {
    int i = 1;
    int n = 1;
    while (i <= x) {
        i += e_primo(n);
        n++;
    }
    return n-1;
}

// A

void arquivo_primo(int x) {
    FILE* f = fopen("primo.txt", "w+t");
    if (f==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    for(int i = 1; i <= x; i++) {
        fprintf(f, "%d\n", primo(i));
    }
    fclose(f);
}

// B

void ler_arquivo_misto() {
    FILE* m = fopen("misto.txt", "r+t");
    if (m==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    FILE* f = fopen("resultado.txt", "w+t");
    if (f==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    int i = 1;
    while(!feof(m)) {
        fscanf(m, "%d", &i);
        if (e_primo(i)) {
            fprintf(f, "primo\n");
        } else {
            fprintf(f, "nao primo\n");
        }
    }
    fclose(f);
    fclose(m);
}

// C

void separar_arquivo_misto() {
    FILE* m = fopen("misto.txt", "r+t");
    if (m==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    FILE* p = fopen("primos.txt", "w+t");
    if (p==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    FILE* o = fopen("outros.txt", "w+t");
    if (p==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    int i = 1;
    while(!feof(m)) {
        fscanf(m, "%d", &i);
        if (e_primo(i)) {
            fprintf(p, "%d\n", i);
        } else {
            fprintf(o, "%d\n", i);
        }
    }
    fclose(o);
    fclose(m);
    fclose(p);
}

// D

void polimonio_arquivo() {
    FILE* m = fopen("misto.txt", "r+t");
    if (m==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    FILE* f = fopen("polimonio.txt", "w+t");
    if (f==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    int i = 1;
    while(!feof(m)) {
        fscanf(m, "%d", &i);
        int resultado = i*i - 5*i + 1;
        fprintf(f, "%d\n", resultado);
    }
    fclose(m);
    fclose(f);
}

// E

void polidemonio_arquivo() {
    FILE* m = fopen("misto.txt", "r+t");
    if (m==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    FILE* f = fopen("polidemonio.txt", "w+t");
    if (f==NULL) {
        printf("Erro ao abrir o arquivo\n");
    }
    int i = 1;
    int a, b, c, d = 0;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    printf("Digite c: ");
    scanf("%d", &c);
    printf("Digite d: ");
    scanf("%d", &d);

    while(!feof(m)) {
        fscanf(m, "%d", &i);
        int resultado = a*(i*i*i) + b*(i*i) + c*i + d;
        fprintf(f, "%d\n", resultado);
    }
    fclose(m);
    fclose(f);
}

int main () {
  polidemonio_arquivo();
	return 0;
}
