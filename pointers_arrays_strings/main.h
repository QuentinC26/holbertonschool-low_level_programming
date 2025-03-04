#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c); /**command putchar*/
void reset_to_98(int); /**command for update the value of the pointers*/
void swap_int(int *a, int *b); /**command for swap the value of two integer number*/
int _strlen(char *s); /**command for return the length of the string*/
void _puts(char *str); /**function for that prints a string*/
void print_rev(char *s); /**function for that prints a reverse string*/
void rev_string(char *s); /**function for reverse the strings*/
void puts2(char *str); /**function for prints every other character of string*/
char *_memset(char *s, char b, unsigned int n); /**function for fills the bytes on the memory*/
char *_memcpy(char *dest, char *src, unsigned int n); /**Function for copy memory area*/
char *_strchr(char *s, char c); /**Function for locates a character in a string*/
unsigned int _strspn(char *s, char *accept); /**Function gets the length of a prefix*/

#endif /* MAIN_H_ */
