//blucles formas de repetir varias veces un codigo se controlara con na opcion
//prgrama que lea dos numeros y que muestre en pantalla todos los numeros comprendidos entre esos nun¿meros dddo


#include <stdio.h>

int main ()
{
	
	int x, y, i;		//contadores i 
	
	printf ("Introduce un numero: ");
	scanf ("%i", &x);
	printf("Introduce un numero mayor al anterior:");
	scanf ("%i", &y);
	
	//bucle for
	
	for (i= x +1 ; i< y; i++) //estructura inicialliza el contador, queremos saber el numero que aparezcan en pantalla 
	{
		printf ("%i, ", i);
		
	}
	printf ("\n");
	
	//bucle while
	
	i = x +1;	//por eso se incia desde el principio
	while (i < y)  //solo lleva una condicion, no se inicia una variable 
	{
		printf ("%i, ", i);
		i++;	//para que continue el bucle
	}
	printf ("\n");
	
	return 0;
	system ("pause");
}
