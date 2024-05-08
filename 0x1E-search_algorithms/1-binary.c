#include "search_algos.h"
#include <unistd.h>


int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;
	char mess[50] = "Searching in array: ", num[5];

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		middle = left + (right - left) / 2;

        	for (i = left; i <= right; i++) 
		{
			sprintf(num, "%d, ", array[i]);
			strcat(mess, num);
		}

		strcat(mess, "\n");
		write(1, mess, strlen(mess));


		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
