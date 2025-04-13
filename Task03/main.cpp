#include "logic.h"

int main() {

	int matrix[BUF][BUF];
	int size;

	cout << "Imput size of square matrix: ";
	cin >> size;

	init_rnd(matrix, size, 0, 9);
	cout << "Matrix:\n" << convert(matrix, size) << endl;
	cout << "Sum elements of the main diagonale: "
		<< sum_elements_of_main_diagonale(matrix, size);

	return 0;
}

