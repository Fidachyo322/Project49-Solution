#include "logic.h"

int main() {
	int matrix[N][M];

	init_rnd(matrix, 0, 0);

	cout << "Matrix:\n";
	cout << convert(matrix) << endl;
	cout << "First raw with max sum of elements: "
	<< get_raw_with_max_sum_of_elements(matrix) + 1 << "\n""\n";

	init_rnd(matrix, 1, 1);
	cout << convert(matrix) << endl;
	cout << "First raw with max sum of elements: "
	<< get_raw_with_max_sum_of_elements(matrix) + 1 << "\n""\n";

	init_rnd(matrix, 0, 100);
	cout << convert(matrix) << endl;
	cout << "First raw with max sum of elements: "
	<< get_raw_with_max_sum_of_elements(matrix) + 1 << "\n""\n";



	return 0;
}

