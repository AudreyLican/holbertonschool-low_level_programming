# C - Doubly linked lists

## General
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Requirements
- Compiled with the options __-Wall -Werror -Wextra -pedantic -std=gnu89__
- Files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
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
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
``````