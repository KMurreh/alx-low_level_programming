#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the newly created array
 *         NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
    int *arr, i;

    if (min > max)
        return (NULL);

    arr = malloc((max - min + 1) * sizeof(int));

    if (arr == NULL)
        return (NULL);

    for (i = 0; min <= max; i++, min++)
        arr[i] = min;

    return (arr);
}
