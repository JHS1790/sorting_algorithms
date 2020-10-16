#include "sort.h"

/**
 * bubble_sort - something something MLP
 * @array: input array to sort
 * @size: size of array in bytes
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (array == NULL || size <= 0)
		return;
	while (true)
	{
		for (i = 0; i + 1 < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			for (j = 0; j + 1 < size; j++)
			{
				if (array[j] > array[j + 1])
					break;
				if (j + 1 == size - 1)
					return;
			}
		}
	}
}
