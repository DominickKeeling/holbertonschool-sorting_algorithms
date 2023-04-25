#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* struct listint_s - doubly linked list node
* @prev: pointer to previous element
* @next: pointer to the next node
* @n: constant integer
*/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap_array(int *array, int a, int b);
void bubble_sort(int *array, size_t size);
void swap_list(listint_t **h, listint_t **a, listint_t *b);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void array_swap(int *array, int a, int b);
void partition(int *array, int low, int high, size_t size);
#endif
