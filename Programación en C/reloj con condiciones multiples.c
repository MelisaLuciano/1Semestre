//Programa que acepte tres numeros horas, min y seg y devueve la hora 
//que sera dentro de un segundo , controlando que sea una hora correcta

#include <stdio.h>

int main ()

{
	int h, min, seg;
	printf ("Ingrese una hora: ");
	scanf ("%i", &h);
	
	printf ("Ingrese minutos: ");
	scanf ("%i", &min);
	
	printf ("Ingrese segundos: ");
	scanf ("%i", &seg);
	
	//algoritmo ...debemos saber cuando una hora es correcta
	//con la hora debe ser menor de 23, min menor de 59, y asi
	
	if (h<=23 && min<=59 && seg<=59)
	{
		
		seg+=1;
		
		if (seg==60)
		{
			min +=1;
			seg=00;
		}
		if (min==60)
		{
			h +=1;
			min=0;
		}
		
		if (h==24)
		
		{
			h=0;
		 } 
		printf ("La hora es: %i:%i:%i", h, min, seg);
	}
	else
	{
		printf ("La hora es incorrecta \n");
		
	}
	
	
	return 0;
	system ("pause");
	
}

