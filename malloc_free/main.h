#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c); /**command putchar*/
char *create_array(unsigned int size, char c); /**Function that creates an array of chars */
char *_strdup(char *str); /**Write a function that returns a pointer*/
char *str_concat(char *s1, char *s2); /**Function that concatenates two strings*/
int **alloc_grid(int width, int height); /**Function that returns a pointer to a 2 dimensional array of integers. */
void free_grid(int **grid, int height); /**Function frees a 2 dimensional grid previously created*/

#endif /* MAIN_H_ */
