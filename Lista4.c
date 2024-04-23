#include <stdio.h>

// a)

int fat(int x) {
	int v = 1;
	for (int i = 1; i <= x; i++) {
		v *= i;
	}
	return v;
}

// b)

int mdc(int x, int y) {
	int z = 0;
	while ((x%y) != 0) {
		if (x >= y) {
			z = x;
			x = x-(x%y);
			y = z%y;
		}
		else return mdc(y, x);
	}
	return y;
}

// c 

int mdc3(int x, int y, int z) {
	return mdc(z, mdc(x,y));
}

// d)

int fib(int n) {
   int i = 1;
   int j = 0;
   int k = 1;
   int valor = 0;
   switch(n) {
      case 1:
         valor = 0;
         break;
      case 2:
         valor = 1;
         break;
      default:
         for(int c = 2; c < n; c++) {
            k = i + j;
            j = i;
            i = k;
            valor = j + i;
         }
         break;
    }
    return valor;
}

// e)

int primo(int x) {
	int i = 2;
	while (i < (x-1)) {
		i++;
		if((x%i) == 0) return 1;
	}
	return 0;
}

// f)

void decrescente(int x) {
	for (x; x >= 0; x--) {
		printf("%d ", x);
	}
	printf("\n");
	return;
}

// g)

int resto(int x, int y) {
	int z, c = 0;
	z = x;
	while (x > y) {
		x = x-y;
		c++;
	}
	return z - (y*c);
}

// h) 

int form(int x) {
	int soma = 0;
	for (int i = 1; i <= x; i++) {
		soma += i*i;
	}
	return soma;
}

// i)

int mmc(int x, int y) {
	return (x*y/mdc(x, y));
}

// j)

int div(int x, int y) {
	int c = 0;
	while (x > y) {
		x = x-y;
		c++;
	}
	return c;
}

// l)

float raiz(float x) {
   float chute = x/2;
   float y = chute*chute;
   while ((y < (x * 0.999)) || (y > (x * 1.001))) {
      if (y > (x * 1.001)) {
         chute = chute/2;
      } else if (y < (x * 0.999)) {
         chute = chute + chute/2;
      }
      y = chute*chute;
   }
   return chute;
}

// m)

int dig(int x) {
	int z = 0;
	int y = 10;
	while((x*10) > y) {
		int w = x%y/(y/10);
		z += w;
		x - w;
		y *= 10;
	}
	return z;
}

// n)

int expo(int x, int y) {
	if (y == 0) return 1;
	for (int i = 1; i < y; i++) {
		x *= x;
	}
	return x;
}

// o) 
void crescente(int x) {
	for (int i = 0; x >= i; i++) {
		printf("%d ", i);
	}
	printf("\n");
	return;
}
