

/**
 * print_name - print a string
 * @name: the string to print
 * @f: a pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
