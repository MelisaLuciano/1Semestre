//condiciones multiples
//hacer un programa que difa si un numero insertado por el teclado se encuantra entre 1 y 10 o s no lo esta

#include <stdio.h>

int main ()
{
	
	int x;
	printf ("Introduce el numero :\n");
	scanf ("%i", &x);
	
	//empieza el algortimo 
	if (x >=1  && x <=10)   //el numoer tiene suque ser mayot o igual a uno, y la segunda codicion es que el nuero sea menor o igual a 10 el doble ampersatan  la ondicion & que se tiene que cunmplir las dos condiciones y entnces entra
	{
		printf ("El numero %i esta entre 1 y 10\n", x);
		
	}
	else
		{
			printf ("El numero no esta entre uno y diez\n", x);
		}
	
	return 0;
	system ("pause");
}
