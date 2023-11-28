# C - Singly linked lists

## General
- When and why using linked lists vs arrays
- How to build use linked lists

## Requierments
- Compiled with the options __-Wall -Werror -Wextra -pedantic -std=gnu89__
- Your code should use the Betty style. It will be checked using __betty-style.pl__ and __betty-doc.pl__
- All your files should end with a new line
- No more than 5 functions per file
- You are not allowed to use global variables
- You are allowed to use _putchar
- The only C standard library functions allowed are __malloc__, __free__ and __exit__. Any use of functions like __printf__, __puts__, __calloc__, __realloc__ etc… is forbidden
- The prototypes of all your functions and the prototype of the function __putchar__ should be included in your header file called __lists.h__

### More info
Use this data structure for this project
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
 typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
``````