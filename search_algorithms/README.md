# C - Search Algorithms

Linear search mandatory write a function that searches for a value in an array of integers using the Linear search algorithm

Prototype :  
int linear_search(int *array, size_t size, int value);  
Where array is a pointer to the first element of the array to search in size is the number of elements in array and value is the value to search for your function must return the first index where value is located.

If value is not present in array or if array is NULL, your function must return -1 Every time you compare a value in the array to the value you are searching, you have to print this value.

Binary search mandatory write a function that searches for a value in a sorted array of integers using the Binary search algorithm

Prototype :  
int binary_search(int *array, size_t size, int value); 

Where array is a pointer to the first element of the array to search in size is the number of elements in array and value is the value to search for your function must return the index where value is located.

You can assume that array will be sorted in ascending order and that the value won’t appear more than once in array.

If value is not present in array or if array is NULL, your function must return -1 You must print the array being searched every time it changes. 

+ Big O #0 mandatory What is the time complexity (worst case) of a linear search in an array of size n?

- Big O #1 mandatory What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

* Big O #2 mandatory What is the time complexity (worst case) of a binary search in an array of size n?

+ Big O #3 mandatory What is the space complexity (worst case) of a binary search in an array of size n?

- Big O #4 mandatory What is the space complexity of this function / algorithm?