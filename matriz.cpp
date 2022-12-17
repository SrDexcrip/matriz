
/*

			Nombre de los integrantes

			Arellano Dominges Ali de jesus
			Beristain Gonzales julio nazario
			Domínguez Villa Aníbal
			Luna marin francisco antonio
			Rozon Ramires Ramon de Jesus


*/


#include "matriz.h"
using namespace std;

int matriz[30][30];

void guardad_matriz(int fila, int columna);
void visualizar(int fila, int columna);
void guardad_vector(int fila, int columna);


int main()
{

	int filas, columnas, r;

	cout << "Espesifique el numero de    filas:  "; cin >> filas;
	cout << "Espesifique el numero de columnas:  "; cin >> columnas;

	system("pause");
	system("cls");


	guardad_matriz(filas, columnas);

	visualizar(filas, columnas);

	guardad_vector(filas, columnas);


	cout << "Reiniciar" << endl;
	cout << "Si = 1" << endl;
	cout << "No = 0" << endl;
	cout << " :";
	cin >> r;


	if (r == 1)
	{
		system("cls");
		return main();
	}

	return 0;
}



void guardad_matriz(int fila, int columna) {

	for (int j = 0; j < fila; j++)
	{
		for (int a = 0; a < columna; a++)
		{
			cout << "Digite un numero: Fila[" << j << "] Columna[" << a << "]: ";

			cin >> matriz[j][a];

		}
	}
	system("pause");
	system("cls");
}


void visualizar(int fila, int columna) {


	cout << "La matriz Bidimensional es:" << endl;

	for (int r = 0; r < fila; r++)
	{
		for (int p = 0; p < columna; p++) {

			cout << "[" << matriz[r][p] << "]";
		}

		cout << endl;
	}
	system("pause");
	system("cls");
}

void guardad_vector(int fila, int columna) {

	cout << "La matriz unidimencional es:" << endl;
	cout << endl;

	int vector[30]{};
	int dato = 0;
	for (int j = 0; j < fila; j++)
	{
		for (int a = 0; a < columna; a++)
		{
			vector[dato] = matriz[j][a];

			if (vector[dato])
			{
				cout << "  [" << j << "][" << a << "]  (" << vector[dato] << ")";
			}
		}
	}

	cout << endl;
	system("pause");
	system("cls");
}