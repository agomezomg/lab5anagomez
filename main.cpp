#include <iostream>
#include <vector>
#include "matrix.h"
using namespace std;

int main()
{
	int choice;
	vector<matrix*> matrixList;
	vector<matrix*> matrixList2;

	do {
		cout << "1. Agregar matriz. \n"; //ya
		cout << "2. Sumar matrices. \n"; //ya
		cout << "3. Menos unario. \n"; //ya
		cout << "4. Restar matrices. \n"; //ya
		cout << "5. Multiplicar matrices. \n";
		cout << "6. Extraccion de flujo. \n"; //ya
		cout << "7. Transpuesta. \n"; //ya
		cout << "8. Comparacion. \n"; //ya
		cout << "9. Diferencia. \n"; //ya
		cout << "10. Determinante. \n";

		if (choice == 1)
		{
			int row, col;
			cout << "Ingrese no. de filas: ";
			cin >> row;
			cout << "Ingrese no. de columnas: ";
			cin >> col;

			matrix* nMatrix = new matrix(row, col);
			nMatrix -> fillMatrix();
			matrixList.push_back(nMatrix);

			cout << "Nueva matrix agregada. \n";
		} else if (choice == 2) //sumar
		{
			int position1;
			int position2;

			cout << "Ingrese posicion de la primer matriz: ";
			cin >> position1;
			cout << "Ingrese posicion de la segunda matriz: ";
			cin >> position2;

			if (matrixList[position1] -> getSize() == matrixList[position2] -> getSize())
			{
				matrix niu = *matrixList[position1] + *matrixList[position2];
				matrix* niu2 = new matrix(niu);
				matrixList2.push_back(niu2);
			}
		} else if (choice == 3) //menos unario
		{
			int position;

			cout << "Ingrese la posicion: ";
			cin >> position;

			matrix negMatrix = -*matrixList[position];
			matrix* niuNegM = new matrix(negMatrix);
			matrixList2.push_back(niuNegM);
		} else if (choice ==4) //restar matrices
		{
			int position1;
			int position2;

			cout << "Ingrese posicion de la primer matriz: ";
			cin >> position1;
			cout << "Ingrese posicion de la segunda matriz: ";
			cin >> position2;

			if (matrixList[position1] -> getSize() == matrixList[position2] -> getSize())
			{
				matrix niu = *matrixList[position1] - *matrixList[position2];
				matrix* niu2 = new matrix(niu);
				matrixList2.push_back(niu2);
			}	
		} else if (choice == 5) //multiplicar matrices
		{
			int position1;
			int position2;

			cout << "Ingrese posicion de la primer matriz: ";
			cin >> position1;
			cout << "Ingrese posicion de la segunda matriz: ";
			cin >> position2;

			if (matrixList[position1] -> getRow() == matrixList[position2] -> getCol())
			{
				cout << "en construccion \n";
			}
		} else if (choice == 6) //extraccion de flujo
		{
			cout << "Lista 1: \n";
			for (int i = 0; i < matrixList.size(); ++i)
			{
				matrixList[i] -> toString();
				cout << endl;
			}

			cout << "Resultados: \n";
			for (int i = 0; i < matrixList2.size(); ++i)
			{
				matrixList2[i] -> toString();
				cout << endl;
			}
		} else if (choice == 7) //transpuesta
		{
			int position;
			cout << "Posicion: ";
			cin >> position;

			matrix nMatrix = *matrixList[position]++;

		} else if (choice == 8) //comparacion
		{
			int position1;
			int position2;
			cout << "P1: ";
			cin >> position1;
			cout << "P2: ";
			cin >> position2;

			if (*matrixList[position1] == *matrixList[position2])
			{
				cout << "son iguales \n";
			} else {
				cout << "no son iguales \n";
			}
		} else if (choice == 9) //diferencia
		{
			int position1;
			int position2;

			cout << "P1: ";
			cin >> position1;
			cout << "P2: ";
			cin >> position2;

			if (*matrixList[position1] == *matrixList[position2])
			{
				cout << "no son iguales \n";
			} else {
				cout << "son iguales \n";
			}
		} else if (choice == 10) //determinante
		{

		} else {
			cout << "Bye. \n";
		}

	} while (choice > 0 && choice < 11);

	for (int i = 0; i < matrixList.size(); ++i)
	{
		delete (matrixList[i]);
	}
	matrixList.clear();
}