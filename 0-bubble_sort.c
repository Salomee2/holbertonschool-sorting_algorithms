#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array containing integers to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
    int temp, swapped, n = size;
    do {
		swapped = 0;
        for (int i = 1; i < n; i++)
		{
            if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
                swapped = 1;
            }
        }
        size--;
    } while (swapped);
}
