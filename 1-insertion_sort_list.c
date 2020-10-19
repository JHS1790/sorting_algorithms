#include "sort.h"
/**
 * insertion_sort_list - conducts insertion sort on a list
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *navigator = *list;
	listint_t *mover, *fore, *aft;

	while (true)
	{
		navigator = navigator->next;
		if (navigator == NULL)
			break;
		if (navigator->n < navigator->prev->n)
		{
			mover = navigator;
			while (mover->n < mover->prev->n)
			{
				aft = mover->prev->prev;
				fore = mover->prev;
				fore->next = mover->next;
				if (fore->next != NULL)
					fore->next->prev = fore;
				fore->prev = mover;
				mover->next = fore;
				mover->prev = aft;
				if (aft == NULL)
				{
					*list = mover;
					print_list(*list);
					break;
				}
				else
					aft->next = mover;
				print_list(*list);
			}
		}
	}
}
