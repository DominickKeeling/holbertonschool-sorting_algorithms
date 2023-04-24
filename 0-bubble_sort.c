#include "sort.h"

/**
* swap_array - swaps two integers in an array
* @array: array to be sorted
* @a: index of first integer
* @b: index of second integer
* Return: nothing
*/
void swap_array(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}


/**
* bubble_sort - this function sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: the array to be used
* @size: size of the array
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;/* both i and j are declared of type size_t */
	size_t j;/* to keep track of each iteration*/

	for (i = 1; i != 0;)
	{
		for (j = 0, i = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_array(array, j, j + 1);
				i++;
				print_array(array, size);
			}
		}
	}
}
