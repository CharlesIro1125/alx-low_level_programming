#ifndef main_H
#define main_H

int _putchar(char c);
int _islower(int c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
#endif /* main_FUNC */
