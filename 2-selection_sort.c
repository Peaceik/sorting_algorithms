#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t b, i, k;
	int search, temp, swapped = 0;

	i = b = 0;
	while (i < (size - 1))
	{
		b = i + 1;
		search = temp = array[i];
		while (b < size)
		{
			if (search > array[b])
			{
				search = array[b];
				swapped = 1;
				k = b;
			}
			b++;
		}
		if (swapped)
		{
			array[i] = search;
			array[k] = temp;
			print_array(array, size);
			swapped = 0;
		}
		i++;
	}
}
