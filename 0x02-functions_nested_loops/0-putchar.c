#include <unistd.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar\n";
int i;

for (i = 0; c[i] != '\0'; i++)
{
write(1, &c[i], 1);
}

return (0);
}
