#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the bubble sort algorithm.
 * @array: Array to sort.
 * @size: Array size.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int flag;
	size_t k = size - 1;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < k - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}

		if (flag == 0)
			break;
	}
}

