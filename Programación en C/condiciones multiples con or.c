//ahora con el o ||
#include <stdio.h>

int main ()
{
	int x;
	
	printf ("Ingresa un numero:\n ");
	scanf ("%i", &x);
	
	if (x >=1 || x <=10)
	{
		printf ("El numero %i esta entre 1 y 10\n", x);
		
	}
	else 
	{
		printf ("El numero %i no esta entre 1 y 10\n", x);
	}
	
	
//la segunda condicion es falsa pero como se cumple la primera se realiza el if
//
	return 0;
	system ("pause");

}
