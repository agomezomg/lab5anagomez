#include "matrix.h"
#include <string>
//using std::string;

#include <iostream>
using namespace std;
//using std::istream;
//using std::ostream;

matrix::matrix() {

}

matrix::matrix(int row, int col){
	this -> row = row;
	this -> col = col;

	/*pMatrix = new int*[row];

	for (int i = 0; i < col; ++i)
	{
		pMatrix = new int[col];
	}*/
}

matrix::~matrix() {
}

int matrix::getRow() {
	return row;
}

int matrix::getCol() {
	return col;
}

int matrix::getSize() {
	return row*col;
}

void matrix::fillMatrix () {
	int nextVal;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << "llenando matriz..." << endl;
			cin >> nextVal;
			pMatrix[i][j] = nextVal;
		}
	}
}

const matrix matrix::operator+(const matrix& r)const{

	matrix retval((this->));

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			retval.pMatrix[i][j] = pMatrix[i][j] + r.pMatrix[i][j];
			//(this->retval[i][j]*r.denominador) + (this->denominador*r.numerador), this->denominador*r.denominador);
		}
	}

    //matrix retval((this->numerador*r.denominador) + (this->denominador*r.numerador), this->denominador*r.denominador);
    return retval;
}