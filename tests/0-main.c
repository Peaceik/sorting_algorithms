#include "sort.h"

int main(void)
{
	int arr[] = {48, 9, 39, 28, 1000, 2}, n = 6;
	print_array(arr, n);
	bubble_sort(arr, n);
	print_array(arr, n);
	return 0;
}
