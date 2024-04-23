#include <stdio.h>
#include <math.h>

const float pi = 3.14;

// 1

struct Ponto {
	float x;
	float y;
	float distancia(Ponto& p);
	void  set(float a, float b);
};

// 2

float Ponto::distancia(Ponto& p) {
	return sqrt(pow(this->x-p.x,2) + pow(this->y-p.y,2));
}

// 3

void Ponto::set(float a, float b) {
	this->x = a;
	this->y = b;
}

// 4

struct Triangulo {
	Ponto A, B, C;

	void set(Ponto& a, Ponto& b, Ponto& c);
	float perimetro();
	float area();
	int equilatero();
	int semelhante(Triangulo& t);
};


void Triangulo::set(Ponto& a, Ponto& b, Ponto& c) {
	this->A = a;
	this->B = b;
	this->C = c;
}

// 5

float Triangulo::perimetro() {
	float perimetro = 0;
	perimetro += this->A.distancia(this->B);
	perimetro += this->B.distancia(this->C);
	perimetro += this->C.distancia(this->A);
	return perimetro;
}

// 6

float Triangulo::area() {
	return (this->A.distancia(this->B) * this->C.distancia(this->A)/2);
}

// 7

int Triangulo::equilatero() {
	return (this->A.distancia(this->B) == this->B.distancia(this->C) == this->C.distancia(this->A));
}

// 8

int Triangulo::semelhante(Triangulo& t) {
	return (this->A.distancia(t.A) == 0 && this->B.distancia(t.B) == 0 && this->C.distancia(t.C) == 0);
}

// 9

struct Retangulo {
	Ponto A, B, C, D;
	void set(Ponto& a, Ponto& b, Ponto& c, Ponto& d);
	float perimetro();
	float area();
	int quadrado();
};

void Retangulo::set(Ponto& a, Ponto& b, Ponto& c, Ponto& d) {
	this->A = a;
	this->B = b;
	this->C = c;
	this->D = d;
}

// 10

float Retangulo::perimetro() {
	float perimetro = 0;
	perimetro += this->A.distancia(this->B);
	perimetro += this->B.distancia(this->C);
	perimetro += this->C.distancia(this->D);
	perimetro += this->D.distancia(this->A);
	return perimetro;
}

// 11

float Retangulo::area() {
	return (this->A.distancia(this->B) * this->B.distancia(this->C));
}

// 12

int Retangulo::quadrado() {
	float LadoA = this->A.distancia(this->B);
	float LadoB = this->B.distancia(this->C);
	float LadoC = this->C.distancia(this->D);
	float LadoD = this->D.distancia(this->A);
	return ((LadoA == LadoB) && (LadoA == LadoC) && (LadoA == LadoD));
}

// 13

struct Circulo {
	Ponto P;
	float Raio;
	void set(Ponto &p, float r);
	float perimetro();
	float area();
	int contemP(Ponto &p);
	int contemT(Triangulo &t);
	int contemR(Retangulo &r);
	int pertenceP(Ponto &p);
	int pertenceT(Triangulo &t);
	int pertenceR(Retangulo &r);

};

void Circulo::set(Ponto &p, float r) {
	this->P = p;
	this->Raio = r;
}

// 14

float Circulo::perimetro() {
	return (2*pi*this->Raio);
}

// 15

float Circulo::area() {
	return (pi*pow(this->Raio, 2));
}

// 16

int Circulo::contemP(Ponto &p) {
	return this->P.distancia(p) < this->Raio;
}

// 17

int Circulo::contemT(Triangulo &t) {
	return (this->P.distancia(t.A) < this->Raio && this->P.distancia(t.B) < this->Raio && this->P.distancia(t.C) < this->Raio);
}

// 18

int Circulo::contemR(Retangulo &r) {
	return (this->P.distancia(r.A) < this->Raio && this->P.distancia(r.B) < this->Raio && this->P.distancia(r.C) < this->Raio && this->P.distancia(r.D) < this->Raio);
}

// 19

int Circulo::pertenceP(Ponto &p) {
	return (this->P.distancia(p) == this->Raio);
}

// 20

int Circulo::pertenceT(Triangulo &t) {
	float Raio = this->Raio;
	return (this->P.distancia(t.A) == Raio && this->P.distancia(t.B) == Raio && this->P.distancia(t.C) == Raio);
}

// 21

int Circulo::pertenceR(Retangulo &r) {
	float Raio = this->Raio;
	return (this->P.distancia(r.A) == Raio && this->P.distancia(r.B) == Raio && this->P.distancia(r.C) == Raio && this->P.distancia(r.D) == Raio);
}
