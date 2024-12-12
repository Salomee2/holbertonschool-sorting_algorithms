#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array containing integers to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t temp, swapped, j;

	if (array == NULL)
		return;
	for (size_t i = 0; i < size; i++)
	{
		swapped = 0;
			for (j = 0; j < size - i; j++)
			{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				swapped += 1;
				print_array(array, size);
			}
		}
	}
}
