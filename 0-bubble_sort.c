#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * using bubble sort algorithm.
 *
 * @array: Array of integers
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int e, i;
	int flag, tmp;

	for (e = 0; e < size - 1; e++)
	{
		flag = 0;
		for (i = 0 ; i < (size - e - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
