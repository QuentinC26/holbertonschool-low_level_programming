
# C Singly Linked List

The C Singly Linked List is a project to use a Singly Linked List in the different context on the project.

## Instruction for the project

* Clone the repository (git clone)

The command for clone the repository is git clone link of https/ssh url.

Here is the link to clone the repository so that you can clone the [repository](https://github.com/QuentinC26/holbertonschool-low_level_programming)

For get the link of https or ssh url, you click on the < code > you see in green. Finally, you copy the link

## A few tips

* Fork (Copy the repository) the repository
* Read the Documentation
* Realize a commit that describe what you changed in the code
* Don't hesitate to test different things before sending your code.

## User guide

### Documentation for the project

* [Documentation for explain the Data Structure](https://www.geeksforgeeks.org/data-structures/)
* [Documentation for explain the Linked List](https://www.geeksforgeeks.org/linked-list-in-c/)
* [Documentation for explain the difference and most suitable use of Array and Linked List](https://www.geeksforgeeks.org/linked-list-vs-array/)

### Explanation of different task on this project

* In task 0, I have to write a function that prints all the elements of a list_t list. 
* In task 1, i have Write a function that returns the number of elements in a linked list_t list.
* In task 2, i have to write a function that adds a new node at the beginning of a list_t list. 
* In task 3, i have to Write a function that adds a new node at the end of a list_t list.
* In task 4, i have to write a function that frees a list_t list.

### Examples for every task

* In task 0 :

* In task 1 :

* In task 2 :

* In task 3 :

* In task 4 :

### Compilation

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options : -Wall -Werror -Wextra -pedantic -std=gnu89

* For task 0 :

You need to create a file 0-main.c to add the following code:

    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "lists.h"

    
    /**
    *main - check the code
    *Return: Always 0.
    */

    int main(void)
    {
        list_t *head;
        list_t *new;
        list_t hello = {"World", 5, NULL};
        size_t n;

        head = &hello;
        new = malloc(sizeof(list_t));
        if (new == NULL)
        {
            printf("Error\n");
            return (1);
        }
        new->str = strdup("Hello");
        new->len = 5;
        new->next = head;
        head = new;
        n = print_list(head);
        printf("-> %lu elements\n", n);

        printf("\n");
        free(new->str);
        new->str = NULL;
        n = print_list(head);
        printf("-> %lu elements\n", n);

        free(new);
        return (0);
    }

Here are the two commands to type to see if the result is correct:

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a

Following by

    ./a

This is the result you should get after typing the compilation command:

    [5] Hello
    [5] World
    -> 2 elements

    [0] (nil)
    [5] World
    -> 2 elements

* For task 1 :

* For task 2 :

* For task 3 :

* For task 4 :

### Bugs in this project

I didn't have any bugs in this project