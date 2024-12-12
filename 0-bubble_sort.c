#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array containing integers to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t temp, swapped;

	if (array == NULL)
		return;
	for (size_t i = 1; i < size; i++)
	{
		swapped = 0;
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
