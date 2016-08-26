#include "matrix.h"
#include <string>
using std::string;

#include <iostream>
using std::istream;
using std::ostream;

matrix::matrix() {

}

matrix::matrix(int row, int col){
	this -> row = row;
	this -> col = col;

	pMatrix = new int*[row];

	for (int i = 0; i < col; ++i)
	{
		pMatrix = new int[col];
	}
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
	this -> row = r.getRow();
	this -> col = r.getCol();

	matrix retval = new matrix(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			retval[i][j] = retval[i][j] + r[i][j];
		}
	}

    //matrix retval((this->numerador*r.denominador) + (this->denominador*r.numerador), this->denominador*r.denominador);
    return retval;
}