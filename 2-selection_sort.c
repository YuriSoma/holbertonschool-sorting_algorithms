#include "sort.h"

/**
 * swap - Swaps two integers in memory
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum_index;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum_index = i;.
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum_index])
				minimum_index = j;
		}

		if (minimum_index != i)
		{
			swap(&array[i], &array[minimum_index]);
			print_array(array, size);
		}
	}
}
