# - 0x1E-search_algorithms

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
