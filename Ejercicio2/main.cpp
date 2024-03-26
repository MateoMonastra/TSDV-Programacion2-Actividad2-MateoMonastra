#include <iostream>
#include <vector>

using namespace std;


struct Invitado
{
	string nombre;
	string apellido;
};

const int CANTIDAD_DE_INVITADOS = 5;

void main()
{

	vector<Invitado> lista;
	for (int i = 0; i < CANTIDAD_DE_INVITADOS; i++)
	{
		Invitado nuevoInvitado;
		try
		{
			cout << "Como se llama el invitado N" << i + 1 << " :" << endl;
			cin >> nuevoInvitado.nombre;
			if (nuevoInvitado.nombre == "homero" || nuevoInvitado.nombre == "Homero")
			{
				throw logic_error("El Nombre del invitado no puede ser HOMERO, lo siento");
			}

			cout << " Y cual es su apellido: " << endl;
			cin >> nuevoInvitado.apellido;

			for (int i = 0; i < lista.size(); i++)
			{
				if (nuevoInvitado.nombre == lista[i].nombre && nuevoInvitado.apellido == lista[i].apellido)
				{
					throw logic_error("Este Invitado ya esta en la lista, no pueden Haber dos iguales");
				}
			}


			lista.push_back(nuevoInvitado);


		}
		catch (const logic_error& error)
		{
			cout << "Ocurrio este Problema: " << error.what() << endl;
		}

	}


	for (int i = 0; i < lista.size(); i++)
	{
		cout << "El Invitado N" << i + 1 << " es: " << lista[i].nombre << lista[i].apellido << endl;
	}

	cin.get();
}