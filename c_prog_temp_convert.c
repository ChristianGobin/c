#include <stdio.h>
#include <math.h>
//Program prints a table of Farenheit to Celsius Conversion as seen in book
//The C Programming Language by k&r

int main()
{
	printf("Fahrenheit\tCelsius\n");
	float fahrenheit;
	float celsius = ceilf(5/6);
	float conversion = 9/5;
	printf("%.2f", celsius);
	/*
	for(fahrenheit = 0; fahrenheit <= 200; fahrenheit += 20)
	{
		celsius = (fahrenheit - 32 * (5/6));
		printf("%.2f\t%.2f\n", fahrenheit, celsius);
	}
	*/
}

