#include <stdio.h>
#include <stdbool.h>
#include <math.h>

const float pi = 3.14;


// 1a
float media(float x, float y, float z) {
    return ((x+y+z)/3);
}
// 1b
float media_ponderada(float x, float y, float z) {
    return ((x * 3 + y * 4 + z * 5)/12);
}
// 1c
float perimetro_circulo(float x) {
    return (2 * pi * x);
}
// 1d
float area_circulo(float x) {
    return (pi * x * x);
}
// 1e
float area_triangulo(float x, float y) {
    return ((x*y)/2);
}
// 1f
float area_caixa(float x, float y, float z) {
    return (2*x*y + 2*x*z + 2*y*z);
}
// 1g
float volume_caixa(float x, float y, float z) {
    return (x*y*z);
}
// 1h
float area_cilindro(float x, float y) {
    return(2*pi*x*y + 2*area_circulo(x));
}
// 1i
float volume_cilindro(float x, float y) {
    return (area_circulo(x)*y);
}
// 1j
float hipotenusa(float x, float y) {
    return sqrt(x*x + y*y);
}
// 1k
float raiz_positiva(float a, float b, float c) {
    float delta = (b*b - 4 * a * c);
    if (delta < 0) return 0;
    return ((-b + sqrt(delta))/(2*a));
}
// 2
int main(int argc, char *argv[]) {
    printf("a) Media: %d\n",                   media(3, 4, 5));
    printf("b) Media ponderada: %.2f\n",       media_ponderada(3, 4, 5));
    printf("c) Perimetro do circulo: %.2f\n",  perimetro_circulo(3));
    printf("d) Area do circulo: %.2f\n",       area_circulo(3));
    printf("e) Area do triangulo: %.2f\n",     area_triangulo(3, 4));
    printf("f) Area da caixa: %.2f\n",         area_caixa(3, 4, 5));
    printf("g) Volume da caixa: %.2f\n",       volume_caixa(3, 4, 5));
    printf("h) Area do cilindro: %.2f\n",      area_cilindro(3,4));
    printf("i) Perimetro do circulo: %.2f\n",  volume_cilindro(3,4));
    printf("j) Hipotenusa: %.2f\n",            hipotenusa(3, 4));
	printf("k) Raiz positiva: %.2f\n",         raiz_positiva(3, 4, -5));
};
