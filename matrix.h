#pragma once
#include <string>
using std::string;

#include <iostream>
using std::istream;
using std::ostream;

class matrix
{
	friend ostream& operator<<(ostream&, const matrix&); 
	friend istream& operator>>(istream&, matrix&);

	private:
		int row, col;
		int** pMatrix;

	public:
		matrix();
		matrix(int, int);
		~matrix();
		matrix(const matrix&);
		void fillMatrix();
		int getRow();
		int getCol();
		int getSize();
		string toString()const;
		const matrix operator++(); //transpose
		const matrix operator+(const matrix&)const; //add
		const matrix operator-(const matrix&)const; //subtract
		const matrix operator-()const; //unitary subtract
		const matrix operator * (const matrix&); //multiply
		bool operator==(matrix&); //equal
		bool operator!=(matrix&); //different
};