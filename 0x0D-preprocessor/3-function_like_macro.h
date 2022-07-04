#ifndef ABSD
#define ABSD
/**
 * ABS - calc the absolute value
 * @x: int
 * Return: int
 */
int ABS(int x)
{
	if (x < 0)
		return (-1 * x);
	else
		return (x);
}
#endif /* ABS */
