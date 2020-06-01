//ver si el numero es par o no
//
#include <stdio.h>

int main ()
{
	int x, y;
	
	printf ("Introduce un numero: \n");
	scanf ("%i", &x);
	
	y= x % 2;  //operacion resto
	
	if (y==0)
	{
		printf ("El numero si es par\n", x);
		
	}
		else 
		{
			printf ("El numero %i, es impar\n", x);
			
		}
	
	
	system ("pause");
	return 0;
	
}
