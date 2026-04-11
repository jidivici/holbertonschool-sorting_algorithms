#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @a: pointer to first integer
 * @b: pointer to second integer
 */
static void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Lomuto partition scheme
 * @array: array of integers
 * @low: starting index
 * @high: ending index (pivot)
 * @size: size of the array
 *
 * Return: final index of the pivot
 */
static int partition(int *array, int low, int high, size_t size)
{
	int pivotvot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivotvot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_recursive - recursive quick sort helper
 * @array: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 */
static void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm (Lomuto scheme)
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
