//operaciones con variables 
#include <stdio.h>
#define PI 3.1416

int main ()

{
	float x;
	int y;
	
	x=PI;
	
	printf ("introduce un valor para y: \n\n");
	scanf ("%i", &y); //escanea lo que se meta por el teclado
	printf ("el valor de y es: %i  \n\n", y); 
	
	x = x*y;
	printf ("el nuevo valor de x es: %f \n\n", x);
	
	
	return 0;
}
