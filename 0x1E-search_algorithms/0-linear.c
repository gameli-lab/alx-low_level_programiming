#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search - function to search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	char mess[50];
	if (array == NULL)
		return (-1);

	for( i = 0; i < size; i++)
		if (array[i] == value)
		{
			sprintf(mess, "Value checked: array[%zu] = [%d]\n", i, array[i]);
                        write(1, mess, strlen(mess));
                        return (i);
		}
		else
		{
			sprintf(mess, "Value checked: array[%zu] = [%d]\n", i, array[i]);
			write(1, mess, strlen(mess));
		}

	return (-1);
}
