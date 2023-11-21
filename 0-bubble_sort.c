#include "sort.h"

/**
 * bubble_sort sorting an array integer in ascending order using buble sort algorithm.
 * @array: array to sort
 * @size: array size.
 *
 * Description - print the array after each swap
 *
 * return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, flag;
	size_t j, k = size - 1;

	for(i = 0; i < size -1; i++)
	{
		flag = 0;
		for(j = 0; j < k - i; j++)
		{
			if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j+1] = temp;
					print_array(array, size);
					flag = 1;
				}
		}

		if (flag == 0)
			break;

	}
}
