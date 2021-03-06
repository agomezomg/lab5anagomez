#include "matrix.h"
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>

using namespace std;

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

matrix::matrix(const matrix& r) {

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
	matrix retval(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			retval.pMatrix[i][j] = pMatrix[i][j] + r.pMatrix[i][j];
		}
	}
	return retval;
}

const matrix matrix::operator-(const matrix& r)const{
	matrix retval(row, col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			retval.pMatrix[i][j] = pMatrix[i][j] - r.pMatrix[i][j];
		}
	}
	return retval;
}

const matrix matrix::operator -()const{
	matrix retval(row, col);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			retval.pMatrix[i][j] = -pMatrix[i][j];
		}
	}
	return retval;
}

ostream& operator<<(ostream& out, const matrix& r){
    out << r.toString();
    return out;
}

string matrix::toString()const {
	stringstream ss;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			ss << pMatrix[i][j] << " ";
		}
		ss << "\n";
	}
        
    return ss.str();
}

const matrix matrix::operator++(){
	matrix retval(col, row);
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			retval.pMatrix[j][i] = pMatrix[i][j];
		}
	}
	return retval;
}

bool matrix::operator==(matrix& r){
	bool same = false;
	int count = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; i < col; ++j)
		{
			if (r.pMatrix[i][j] == pMatrix[i][j])
			{
				count++;
			}
		}
	}

	if (count == row*col)
	{
		same = true;
	}
    return same;
}

bool matrix::operator!=(matrix& r){
    bool same = false;
	int count = 0;
	for (int i = 0; i < row; ++i) {
	
		for (int j = 0; j < col; ++j)
		{
			if (r.pMatrix[i][j] != pMatrix[i][j])
			{
				count++;
			}
		}
	}

	if (count == row*col)
	{
		same = true;
	}
    return same;
}

const matrix matrix::operator * (const matrix& r) {
	matrix temp(row, col);
	int rowss = row;
	int colss = r.col;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < colss; ++j)
		{
			for (int k = 0; k < col; ++k)
			{
				temp.pMatrix[i][j] = temp.pMatrix[i][j] + pMatrix[i][k] * r.pMatrix[k][j];
			}
		}
	}
	return temp;
}

void matrix::operator--() {
	double result = 0;
	if (row == 2)
	{
		result = (pMatrix[0][0]*pMatrix[1][1])-(pMatrix[1][1]*pMatrix[0][1]);
	}
	else {
		result = pMatrix[0][0]*pMatrix[1][1]*pMatrix[2][2];
		result += pMatrix[0][1]*pMatrix[1][2]*pMatrix[0][2];
		result += pMatrix[0][2]*pMatrix[1][0]*pMatrix[2][1];
		
	}
	cout<<"el resultado es: "<< result <<"\n";
}