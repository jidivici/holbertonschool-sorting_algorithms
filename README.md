SORTING ALGORITHMS PROJECT

Description

This project implements basic sorting algorithms in C.
The goal is to understand how they work, their complexity, and their behavior.

Algorithms implemented:

- Bubble Sort
- Insertion Sort (on doubly linked list)
- Selection Sort
- Quick Sort

---

Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o sort

---

Files

0-bubble_sort.c
Sorts an array of integers using the Bubble Sort algorithm.

1-insertion_sort_list.c
Sorts a doubly linked list using the Insertion Sort algorithm.

2-selection_sort.c
Sorts an array of integers using the Selection Sort algorithm.

3-quick_sort.c
Sorts an array of integers using the Quick Sort algorithm.

sort.h
Contains all structures and function prototypes.

---

Algorithms

Bubble Sort
Repeatedly swaps adjacent elements if they are in the wrong order.
Time Complexity: O(n²)

Insertion Sort
Builds the sorted list one element at a time.
Time Complexity: O(n²)

Selection Sort
Selects the smallest element and places it at the correct position.
Time Complexity: O(n²)

Quick Sort
Divides the array using a pivot and recursively sorts subarrays.
Time Complexity:
- Average: O(n log n)
- Worst: O(n²)

---

Concepts

- Sorting algorithms
- Time complexity
- Arrays vs linked lists
- Recursion (Quick Sort)