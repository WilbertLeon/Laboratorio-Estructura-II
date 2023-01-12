#include <iostream>
using namespace std;

int main()
{
	/*
	La profesora explicaba a sus alumnos las propiedades de los numeros enteros.Les mostro como el
	numero 8833 es igual a 88 ^ 2 + 33 ^ 2 y prosiguo su clase. Como es habitual Gleidy no prestaba atencion,
	asi advirtio que la hora que marcaba el reloj sin coma mostraba la misma propiedad, esto quiere decir que el cuadrado de
	los numeros que indicaba la hora al cuadrado mas los que indicaban los minutos al cuadrado daba el numero sin coma.
	*/

	int suma, elevado;

	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			if ((i * 100) + j == ((i * i) + (j * j)))
			{
				cout << i << " y " << j << "\n" << endl;
			}
		}
	}

	return 0;
}