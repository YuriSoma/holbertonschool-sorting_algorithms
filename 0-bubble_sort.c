#include "sort.h"

/**
 * bubble_sort - sort elements of a given array using "Bubble sort" algorithm.
 * @array - The array to sort its elements.
 * @size - The size of the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j;

	if (!array || !size)
		return;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
