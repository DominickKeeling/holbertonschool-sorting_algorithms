#include "sort.h"
/**
 * swaps - swaps two numbers
 * @a : integer 1
 * @b : integer b
 */

void swaps(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array : pointer to array of ints
 * @size : size of array
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min, temp = size;

	if (!array || size < 2)
		return;
	for (i = 0; i < temp - 1; i++)
	{
		min = i;
		for (j = i + 1; j < temp; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swaps(array + i, array + min);
			print_array(array, size);
		}
	}
}
