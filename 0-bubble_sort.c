#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, b, c;
	int temp;

	i = c = 0;
	b = 1;

	while (1)
	{
		while (b < size)
		{
			if (array[i] > array[b])
			{
				temp = array[i];
				array[i] = array[b];
				array[b] = temp;
				print_array(array, size);
			}
			i = b;
			b++;
		}

		while (c < (size - 1))
		{
			if (array[c] < array[c + 1])
			{
				c++;
				continue;
			}
			else
			{
				i = c = 0;
				b = 1;
				break;
			}
			c++;
		}
		if (c == (size - 1))
			break;
	}
}
