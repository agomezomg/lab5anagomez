class matrix
{
private:
	int row, col;
	int** pMatrix;

public:
	matrix();
	matrix(int, int);
	~matrix();
	void fillMatrix();
	int getRow();
	int getCol();
	int getSize();
	const matrix operator+(const matrix&)const; //add
	const matrix operator-(const matrix&)const; //subtract
	const matrix operator*(const matrix&)const; //multiply
	const matrix operator/(const matrix&)const; //divide
	bool operator==(matrix&); //equal
	bool operator!=(matrix&); //different
};