#include <stdio.h>

int main (void) {
	printf("Generacion de codigo de 3 direcciones\n");
	int x,y,i,j,z;
	x = 34;
	y = x * 34 - (x - 12 + 13);

	// Sentencias condicionales (if)
	if (y > 1000) {
		printf("Es un numero muy alto\n");
	} else {
		printf("Es un numero bajo\n");
	}

	// Sentencias ciclicas (While, form do-while)
	i = 0;
	do {
		i = i + 1 + 0;
	} while (i < 10);

	while (i < 15) {
		i = i + 1 + 0;
	}

	for (int k = 0; k < i; k++) {
		x = x + 1;
	}

	return y;
}
