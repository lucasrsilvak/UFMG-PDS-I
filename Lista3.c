#include <stdio.h>
#include <math.h>

// a)

int fatorial(int n) {
	if (n == 0) return (1);
	return (n*fatorial(n-1));
}

// b)

int mdc(int a, int b) {
	if (a%b == 0) return (b);
	if (b > a)    return mdc(b, a);
	return mdc(a-(a%b), a%b);
}

// c)

int mdc3(int a, int b, int c)  {
	return mdc(a, mdc(b, c));
}

// d)

int fib(int x) {
	if (x < 2) return 1;
	return (fib(x-1) + fib(x-2));
}

// e)

int primo(int x, int y)  {
	if (x%y==0 && y>1) return (0);
	if (y==1) 	   return (1);
	return primo(x, y-1);
}

// f)
void decrescente(int x) {
	printf("%d ", x);
	if (x > 0) decrescente(x-1);
	else printf("\n");
}

// g)

int res(int x, int y) {
	if (y > x) return x;
	return (res(x-y, y));
}

// h)

int form2(int x, int y, int z) {
	if (y == x) return z;
	return form2(x, y+1, z+y);
}

int form(int x) {
	return form2(x*x+1, 0, 0);
}

// i)

int mmc(int x, int y) {
	if (x < y) return mmc(y, x);
	return (x*y/mdc(x, y));
}

// j)

int div(int x, int y, int z) {
	if (y >= x) return z;
	return div(x-y, y, z+1);
}

// l)

float raiz(float x, float y) {
	float z = y*y;
	if((z >= x*0.999) && (z <= x*1.001)) return y;
	if(z > x) return raiz(x, y*0.5);
	else 	  return raiz(x, y*1.5);
}

// m)

int dig2(int x, int y, int z) {
	int w = x%y;
	int v = 0;
	
	if (y/10 != 0) v = (w/(y/10));
	if (y > x) return z+v;
	
	return dig2(x-w, y*10, z+v);
}

int dig(int x) {
	return dig2(x, 1, 0);
}

// n)

int expo2(int x, int y, int z) {
	if (y == 0) return 1;
	else if (y > 0) {
		z = z*x;
		y = y-1;
		return expo2(x, y, z);
	}
	return z;
}

int expo(int x, int y) {
	return expo2(x, y, x);
}

// o)

void crescente(int x, int y) {
	printf("%d ",y);
	if (x > y) crescente(x, y+1);
	else printf("\n");;
}

int main()
{
	printf("a) fatorial: %d\n", fatorial(5));
	printf("b) mdc: %d\n", mdc(12,24));
	printf("c) mdc3: %d\n", mdc3(10, 25, 500));
	printf("d) fib: %d\n", fib(6));
	printf("e) primo: %d\n", primo(35, 35));
	printf("f) descrescente: "); 
	decrescente(5);
	printf("g) resto: %d\n", res(35, 8));
	printf("h) form: %d\n", form(5));
	printf("i) mmc: %d\n", mmc(18,24));
	printf("j) div: %d\n", div(35,2,0));
	printf("l) raiz: %.2f\n", raiz(35, 35/2));
	printf("m) dig: %d\n", dig(353535));
	printf("n) expo: %d\n", expo(3, 5));
	printf("o) crescente: ");
	crescente(5, 0);
}
