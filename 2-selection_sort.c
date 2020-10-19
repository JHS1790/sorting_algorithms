#include "sort.h"
/**
 * selection_sort - sorts an array via selection sort
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int store[2];
	size_t i, j;

	if (array == NULL || size < 1)
		return;
	for (i = 0; i < size; i++)
	{
		store[0] = array[i];
		store[1] = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < store[0])
			{
				store[0] = array[j];
				store[1] = j;
			}
		}
		if (array[i] > store[0])
		{
			array[store[1]] = array[i];
			array[i] = store[0];
			print_array(array, size);
		}
	}
}
