#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

/* If the first byte is 1, it's little endian */
if (*endian == 1)
return 1;
else
return 0;
}
