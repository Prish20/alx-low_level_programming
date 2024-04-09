# SEARCH ALGORITHMS

## Tasks

### 0. Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

Prototype: `int linear_search(int *array, size_t size, int value);`

- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in `array`.
- `value` is the value to search for.

Your function must return the first index where `value` is located. If `value` is not present in `array` or if `array` is `NULL`, your function must return -1.

Every time you compare a value in the array to the value you are searching, you have to print this value (see example below).

```c
❯ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
❯ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

### 1. Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

Prototype : `int binary_search(int *array, size_t size, int value);`

- Where `array` is a pointer to the first element of the `array` to search in.
- `size` is the number of elements in `array`.
- And `value` is the value to search for.
- Your function must return the index where `value` is located.
- You can assume that `array` will be sorted in ascending order.
- You can assume that `value` won’t appear more than once in `array`.
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`.

You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

```c
❯ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
❯ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

### 2. Big O #0

What is the `time complexity` (worst case) of a linear search in an array of `size n`?

### 3. Big O #1

What is the `space complexity`(worst case) of an iterative linear search algorithm in an array of `size n`?

### 4. Big O #2

What is the time `complexity` (worst case) of a binary search in an array of `size n`?

### 5. Big O #3

What is the `space complexity` (worst case) of a binary search in an array of `size n`?

### 6. Big O #4

What is the `space complexity` of this function / algorithm?

```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
