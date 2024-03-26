#include <iostream>

using namespace std;


void main()
{
	try
	{
		int dividendo = 0;
		int divisor = 0;
		int cociente = 0;
	

		cout << "ingrese un numero a dividir: " << endl;
		cin >> dividendo;

		cout << "ahora ingrese un numero para dividirlo: " << endl;
		cin >> divisor;
		if (divisor == 0)
		{
			throw logic_error("Esta calculadora no puede dividir por 0");
			
		}


		cociente = dividendo / divisor;

		cout << "El resultado es: " << cociente << endl;
	
	}
	catch(const logic_error& error)
	{
		cout << "Ocurrio un error: " << error.what() << endl;
	}
	
	cin.get();
}