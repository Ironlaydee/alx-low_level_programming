#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int n;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (n = low; n <= high; n++)
			printf("%i%s", array[n], n == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
