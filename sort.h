#ifndef SORT_H
#define SORT_H

/* Includes */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* Structs */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Project Prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Non-Project Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int partitioner(int *array, int low, int high, size_t size);
void lomuto_sorter(int *array, int low, int high, size_t size);
void swap(int *el1, int *el2);

#endif /* SORT_H */
