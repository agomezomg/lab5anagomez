#include <iostream>
#include <vector>
#include "matrix.h"
using namespace std;

int main()
{
	int choice;
	vector<matrix*> matrixList;

	do {
		cout << "1. Agregar matriz. \n";
		cout << "2. Sumar matrices. \n";
		cout << "3. Menos unario. \n";
		cout << "4. Restar matrices. \n";
		cout << "5. Multiplicar matrices. \n";
		cout << "6. Extraccion de flujo. \n";
		cout << "7. Transpuesta. \n";
		cout << "8. Comparacion. \n";
		cout << "9. Diferencia. \n";
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
				

			}
		} else if (choice == 3) //menos unario
		{
			int position;

			cout << "Ingrese la posicion: ";
			cin >> position;

			matrixList[position];
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
				/* code */
			}
		} else if (choice == 6) //extraccion de flujo
		{

		} else if (choice == 7) //transpuesta
		{

		} else if (choice == 8) //comparacion
		{
		
		} else if (choice == 9) //diferencia
		{
		
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