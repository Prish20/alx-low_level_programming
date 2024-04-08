#include "main.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1
 * if value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	size_t i;
	int mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = (size_t)left; i <= (size_t)right; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)right)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
