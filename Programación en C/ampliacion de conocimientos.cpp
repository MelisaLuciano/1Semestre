//ampliando conocimientos
#include <stdio.h>
#include <math.h>


int main ()
{
	int x, y, z;
	
	x= 10;
	y=2;
	
	//operaciones basicas
	
	x +=y;	//x=x+y;
	printf ("El valor de x + y es: %i\n", x);
	
	x -=y;	//es lo mismo que x=x-y;
	printf ("El valor de x - y es: %i\n", x);
	
	x=x*y;
	printf ("El valor de x * y es: %i\n", x);
	
	x=x/y;
	printf ("El valor de x/y es: %i\n", x);
	
	//x=x % y;
	//printf ("El valor de x % y es: %i\n", x);
	
	x=pow (y,x);   //elevar es pow!!!!!!!!!!!!!!!
	printf ("El valor de y elevado a x es: %i\n", x);
	
	x=sqrt (x);
	printf ("El valor raiz de x es: %i\n", x);

	//operadores de incremento que es sumar o disminuir una unidad
	
	x++;
	
	printf ("el valor de x++ es: %i\n", x);
	
	x--;
	printf ("el valor de x-- es: %i\n" , x);
	return 0;
}
