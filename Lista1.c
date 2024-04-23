#include <stdio.h>
#include <stdbool.h>

// Exercício 1a
float max(float x, float y, float z) {
	if (x > y && x > z) return (x);
	if (y > z)	return (y);
  return (z);
}

// Exercício 1b
float min (float x, float y, float z) {
	if (x < y && x < z) return (x);
  if (y < z)	return (y);
  return (z);
}

// Exercício 2a
int par (int x) {
	return (x%2 == 0);
}

// Exercicio 2b
int dentro(float x, float y, float z) {
	return ((x >= y) && (x <= z));
}

int fora(float x, float y, float z) {
	return (!dentro(x,y,z));
}

// Exercício 3
int bissexto (int x) {
	return (x%4 == 0);
}

int main(int argc, char *argv[]) {
	float x,y,z;
	printf("Digite o n: ");
	scanf("%d %d %d", &x, &y, &z);
	printf("Esta dentro %d\n", dentro(x,y,z));
	printf("Esta fora %d\n", fora(x,y,z));
	return 0;
};
