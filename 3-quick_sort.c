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
	if (!array)
		return;
	qksort_pro(array, 0, size, size);
}

/**
 * qksort_pro - auxiliary function
 * @arr: array
 * @start: first element
 * @size: last endpoint
 * @S: size of array
 *
 * Return: void
 */
void qksort_pro(int *arr, size_t start, size_t size, size_t S)
{
	size_t j, p = size - 1, i = start;
	int large, temp, found = 0;

	if (sorted(arr, size))
		return;
	while (i < p)
	{
		if (arr[i] > arr[p])
		{
			large = arr[i], j = i + 1;
			while (j <= p)
			{
				if (arr[j] < arr[p])
				{
					arr[i] = arr[j], arr[j] = large;
					found = 1, print_array(arr, S);
					break;
				}
				else
					found = 0;
				j++;
			}
			if (!found)
				break;
		}
		i++;
	}
	if (!found && arr[p] != arr[i])
	{
		temp = arr[p], arr[p] = large, arr[i] = temp;
		found = 0, print_array(arr, S);
	}
	if (i == (size - 1))
		qksort_pro(arr, 0, (size - 1), S);
	else if(!i)
		qksort_pro(arr, 0, size, S);
	else
	{
		qksort_pro(arr, 0, i, S), qksort_pro(arr, (i + 1), size, S);
	}
}

/**
 * sorted - checks if an array or segment of an array is sorted
 * @array: array to be checked
 * @size: size of the array
 *
 * Return: 1 if true, else 0
 */
int sorted(int *array, size_t size)
{
	size_t i = 0;

	while (i < (size - 1))
	{
		if (array[i] > array[i + 1])
			return 0;
		else
		{
			i++;
			continue;
		}
	}
	return 1;
}
