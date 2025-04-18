#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c); /*command putchar*/
void reset_to_98(int); /*command for update the value of the pointers*/
void swap_int(int *a, int *b); /*command for swap the value of two integer number*/
int _strlen(char *s); /*command for return the length of the string*/
void _puts(char *str); /*function for that prints a string*/
void print_rev(char *s); /*function for that prints a reverse string*/
void rev_string(char *s); /*function for reverse the strings*/
void puts2(char *str); /*function for prints every other character of string*/
void puts_half(char *str); /*function that prints half of a string */
void print_array(int *a, int n); /*function that prints n elements of an array of integers*/
char *_strcpy(char *dest, char *src); /*function that copies the string*/
int _atoi(char *s); /*function for convert a string to an integer*/
char *_strcat(char *dest, char *src); /*function for concatenates two strings*/
char *_strncat(char *dest, char *src, int n); /*function for concatenates two strings*/
char *_strncpy(char *dest, char *src, int n); /*function for copies a string */
int _strcmp(char *s1, char *s2); /*function for compare two strings */
void reverse_array(int *a, int n); /*function for  reverses the content of an array of integers*/
char *string_toupper(char *); /**function for  changes all lowercase letters of a string to uppercase*/
char *_memset(char *s, char b, unsigned int n); /*function for fills the bytes on the memory*/
char *_memcpy(char *dest, char *src, unsigned int n); /*Function for copy memory area*/
char *_strchr(char *s, char c); /*Function for locates a character in a string*/
unsigned int _strspn(char *s, char *accept); /*Function gets the length of a prefix*/

#endif /* MAIN_H_ */
