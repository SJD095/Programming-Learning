#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix(const Matrix& otherMatrix)
{
	N = otherMatrix.N;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			m[i][j] = otherMatrix.m[i][j];
		}
	}
}

void Matrix::setElement(int x, int y, int value)
{
	m[x][y] = value;
}

Matrix Matrix::multiply(const Matrix& otherMatrix)
{
	Matrix result(N);
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			int tmp = 0;
			for(int c = 0; c < N; c++)
			{
				tmp += m[i][c] * otherMatrix.m[c][j];
			}
			
			result.m[i][j] = tmp;
		}
	}
	
	return result;
}

Matrix Matrix::transposition()
{
	Matrix result(N);
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			result.m[i][j] = m[j][i];
		}
	}
	
	return result;
}

void Matrix::print()
{
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cout << m[i][j] << " ";
		}
		
		cout << endl;
	}
}