#include <stdio.h>

int main ()
{
	
	int x;
	
	printf ("Ingresa un numero entre 1 y 4\n\n");
	scanf ("%i", &x);
	
	switch (x)
	{
		case 1:
			printf ("Lunes\n\n"); 
			break;    					//break sale del switch si se quita se ejecutan todas las sentencias
			case 2:
				printf ("Martes\n\n");
				break;
				case 3:
					printf ("Miercoles\n\n");
					break;
					case 4:
						printf ("Jueves\n\n");
						break;
						default:
							printf ("EL numero no es correcto\n");
	}
	
	system ("pause");	
	return 0;
}
