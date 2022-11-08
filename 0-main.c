#include "sort.h"

int main(void)
{
	int arr[] = {48, 93, 92, 35, 93, 2, 56, 25, 37, 11, 18}, n = 12;
	print_array(arr, n);
	bubble_sort(arr, n);
	print_array(arr, n);
	return 0;
}
