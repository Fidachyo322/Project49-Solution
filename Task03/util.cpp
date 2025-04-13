#include "util.h"
string convert(int matrix[BUF][BUF],int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			s += to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}

	return s;
}
void init_rnd(int matrix[BUF][BUF], int a, int b, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}

	}
}
void init_user(int matrix[BUF][BUF],int size) {
	cout << "imput matrix (" << size << "x" << size << ") elements: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "]: ";
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}

	}
}