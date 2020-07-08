#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 *
 * @array: array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t idx, current_n;
	int temp_variable;

	if (!array)
		return ;

	for (idx = 0; idx < size  - 1; idx++)
	{
		for (current_n = idx + 1; current_n < size; current_n++)
		{
			if (array[idx] > array[current_n])
			{
				temp_variable = array[idx];
				array[idx] = array[current_n];
				array[current_n] = temp_variable;
			}
		}
		print_array(array, size);
	}
}
