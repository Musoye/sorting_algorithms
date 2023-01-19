#include "sort.h"
/**
 * selection_sort - selection algorithm sort
 * @array: the array
 * @size: the size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, holder;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			holder = array[i];
			array[i] = array[min];
			array[min] = holder;
			print_array(array, size);
		}
	}
}
