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
		return (-x);
	else
		return (x);
}
#endif /* ABS */
