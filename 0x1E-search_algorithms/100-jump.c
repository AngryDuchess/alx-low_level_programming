#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
* jump_search - searches for a value in an array of integers using
*  the Jump search algorithm
*  @array: a pointer to the first element of the array to search in
*  @size: number of elements in the array
*  @value: value to search for in the array
*  Return: index of the searched value
*/

int jump_search(int *array, size_t size, int value)
{
	size_t previous, step;

	if (!array)
		return (-1);

	previous = 0;
	step = sqrt(size - 1);

	printf("Value checked array[%lu] = [%d]\n", previous, array[previous]);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		previous = step;
		step += sqrt(size);
		if (previous >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", previous, step);

	if (step >= size)
		step = size - 1;

	for (; previous <= step; previous++)
	{
		printf("Value checked array[%lu] = [%d]\n", previous, array[previous]);

		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
