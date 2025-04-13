#include "logic.h"

int main() {

	int matrix[BUF][BUF];
	int size;
	cout << "Imput size of square matrix: ";
	cin >> size;

	change_matrix(matrix, size);
	cout << "Phofagor table:\n" << convert(matrix, size);



	return 0;
}

