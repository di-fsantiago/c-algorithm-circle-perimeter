#include <stdio.h>
#include <locale.h>
#define PI 3.14159

int main() {
	setlocale(LC_ALL, "Portuguese");
	float raio, perimetro;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	perimetro = 2 * raio * PI;
	printf("O perímetro é aproximadamente = %.2f u.m.\n", perimetro);
	
	return 0;
}
