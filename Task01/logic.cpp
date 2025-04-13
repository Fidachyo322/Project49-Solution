#include "util.h"

int sum_raw_elements(int* raw) {
	int sum = 0;

	for (int i = 0; i < M; i++)
	{
		sum += raw[i];
	}

	return sum;
}

int get_raw_with_max_sum_of_elements(int matrix[N][M]) {
	int number = 0;
	int sum = sum_raw_elements(matrix[0]);

	for (int i = 1; i < N; i++)
	{
		int t_sum = sum_raw_elements(matrix[i]);
		if (t_sum > sum) {
		sum = t_sum;
		number = i;
		}
	}
	return number;
}

