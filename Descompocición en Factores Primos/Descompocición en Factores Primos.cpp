#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

int NPrimo();
bool Validacion(string c);

int np = 2;

bool Validacion(string c)
{
	for (int i = 0; i < c.length(); i++)  // Recorre la cadena completa.
	{
		if (isdigit(c[i]) == false)  // isdigit comprueba si el valor dentro de la cadena es un dígito.
		{
			return false;
		}
	}
	return true; // Devuelve true si es un dígito o false es una letra.
}

int NPrimo() 
{
	int Cont = 0;

	do
	{
		for (int i = 1; i < (np + 1); i++)
		{
			if (np % i == 0){Cont++;}
		}

		if (Cont == 2) {return np;}else{Cont = 0;}
		np++;
		
	} while (Cont != 2);

}

int main()
{
	int n = 0, Np, Des;
	string str;
	bool validar = false;

	do
	{
		system("cls");
		cout << "Ingresar el numero a descomponer: ";
		cin >> str;

		validar = Validacion(str); // Valida que la entrada sea correcta.

		if (validar == true) // En caso de que sea correcta lo transforma en int.
		{
			n = stoi(str);
		}

	} while (validar == false); // Continua el bucle mientras la validacion sea falsa.

	cout << n << " = ";
	Des = n;

	do
	{
		Np = NPrimo();

		if (n % Np == 0)
		{
			Des = Des / Np;
			(Des != 1) ? cout << Np << " x " : cout << Np << "\n" << endl;
		}

		if (Des % Np != 0){np++;}		

	} while (Des != 1);

	return 0;
}