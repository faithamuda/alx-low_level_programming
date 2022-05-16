#ifndef _MAIN_H_
#define _MAIN_H_

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);

#endif
