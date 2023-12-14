#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Position of search element
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (!array || !value)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

