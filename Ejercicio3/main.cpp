#include <iostream>

using namespace std;


void main()
{
	int num = 0;
	int fibonacciNumber = 0;
	int aux = 1;
	int prevAux = 0;

	try
	{
		cout << "Ingrese un Numero que sea impar, Multiplo de 7, que sea compuesto (no primo), entre 1 y 100" << endl;
		cin >> num;
		if (num % 2 == 0)
		{
			throw logic_error("No es un Numero impar");
		}
		if (num % 7 != 0)
		{
			throw logic_error("No es Multiplo de 7");
		}
		if (num % 5 != 0 && num % 3 != 0 && num % 2 != 0)
		{
			throw logic_error("No es un Numero compuesto");
		}
		if (num < 1 || num > 100)
		{
			throw logic_error("No cumple con los parametros");
		}



		while (num >= fibonacciNumber)
		{
			fibonacciNumber = aux + prevAux;

			aux = prevAux;

			prevAux = fibonacciNumber;
		}

		cout << endl;
		cout << "-----------------------------------------" << endl;
		cout << aux << endl;

	}
	catch (const logic_error& error)
	{
		cout << "el error ocurrido fue: " << error.what() << endl;
	}




	cin.get();
}