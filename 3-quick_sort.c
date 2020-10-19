#include "sort.h"
/**
 * quick_sort - sorts the array quickly
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	lomuto_sorter(array, 0, (size - 1), size);
}
/**
 * lomuto_sorter - calls partitioner recursively with Lomuto algorithim logic
 * @array: array to sort
 * @low: lowest boundary
 * @high: highest boundary
 * @size: size of array
 */
void lomuto_sorter(int *array, int low, int high, size_t size)
{
	int partind;

	if (low < high)
	{
		partind = partitioner(array, low, high, size);
		lomuto_sorter(array, low, partind - 1, size);
		lomuto_sorter(array, partind + 1, high, size);
	}
}
/**
 * partitioner - partitions the array and calls swap
 * @array: array to sort
 * @low: lowest boundary
 * @high: highest boundary
 * @size: size of the aray
 * Return: index of pivot
 */
int partitioner(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j, i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * swap - swaps two array pieces
 * @el1: element 1
 * @el2: element 2
 */
void swap(int *el1, int *el2)
{
	int temp = *el1;
	*el1 = *el2;
	*el2 = temp;
}
