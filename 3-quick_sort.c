#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	_qksort(array, 0, size - 1, size);
}

/**
 * _qksort - auxiliary function
 * @a: array
 * @low: first element
 * @high: last element
 * @size: size of array
 *
 * Return: void
 */
void qksort(int *a, int low, int high, int size)
{
	int p, w, i;
	int tmp;

	if (low < high)
	{
		p = high;
		w = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[p])
			{
				if (i != w)
				{
					tmp = a[i];
					a[i] = a[w];
					a[w] = tmp;
					print_array(a, size);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			tmp = a[w];
			a[w] = a[p];
			a[p] = tmp;
			print_array(a, size);
		}
		_qksort(a, low, w - 1, size);
		_qksort(a, w + 1, high, size);
	}
}
