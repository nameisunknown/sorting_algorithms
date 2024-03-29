#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: Is the arry to sort
 * @size: Is the size of the array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped = 0;
	int temp = 0;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}
