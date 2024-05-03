#include <iostream>

using namespace std;

const int MAX = 3;

class matrix 
{
	private:
		int mat[MAX][MAX];
	public:
		matrix();
		void create();
		void display();
		void matadd( matrix &m1, matrix &m2 );
		void matmul( matrix &m1, matrix &m2 );
		void transpose( matrix &m1 );

};

matrix::matrix() 
{
	for ( int i = 0; i < MAX; i++ ) 
	{
		for ( int j = 0; j < MAX; j++ ) 
			mat[i][j] = 0;
	}
}

void matrix::create() 
{
	for ( int i = 0; i < MAX; i++ ) 
	{
		for ( int j = 0; j < MAX; j++ ) 
		{
			cout << "Enter the element: ";
			cin >> mat[i][j];
		}
	}
}

void matrix::display() 
{
	for ( int i = 0; i < MAX; i++ ) 
	{
		for ( int j = 0; j < MAX; j++ ) 
			cout << mat[i][j] << " ";
		cout << endl;
	}
}

void matrix::matadd( matrix &m1, matrix &m2 ) 
{
	for ( int i = 0; i < MAX; i++ ) 
	{
		for ( int j = 0; j < MAX; j++ ) 
			mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
	}
}

void matrix::matmul( matrix &m1, matrix &m2 ) 
{
	for ( int i = 0; i < MAX; i++ ) 
	{
		for ( int j = 0; j < MAX; j++ ) 
		{
			for ( int k = 0; k < MAX; k++ ) 
				mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
		}
	}
}

void matrix::transpose( matrix &m1 ) 
{
	for ( int i = 0; i < MAX; i++ ) 
	{
		for ( int j = 0; j < MAX; j++ ) 
			mat[i][j] = m1.mat[j][i];
	}
}

int main() 
{
	matrix mat1;
	cout << endl << "Enter elements for first array: " << endl;
	mat1.create();

	matrix mat2;
	cout << endl << "Enter elements for second array: " << endl;
	mat2.create();

	cout << endl << "First Array: " << endl;
	mat1.display();
	cout << endl << "Second Array: " << endl;
	mat2.display();

	matrix mat3;
	mat3.matadd( mat1, mat2 );
	cout << endl << "After Addition: " << endl;
	mat3.display();

	matrix mat4;
	mat4.matmul( mat1, mat2 );
	cout << endl << "After Multiplication: " << endl;
	mat4.display();

	matrix mat5;
	mat5.transpose( mat1 );
	cout << endl << "Transpose of first matrix: " << endl;
	mat5.display();

	return 0;
}
