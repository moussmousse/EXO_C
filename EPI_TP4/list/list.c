#include <stdio.h>
#include <stdlib.h>

#include "list.h"



void list_init(struct list *list)
{
  list->next = NULL;
}


int list_is_empty(struct list *list)
{
  return list->next == NULL;
}

size_t list_len(struct list *list)
{
  size_t len = 0;
  struct list *curent = list;
  for (;curent->next != NULL; ++curent)
    len ++;
  free(curent);
  return len;
}


void list_push_front(struct list *list, struct list *elm)
{
  struct list *tmp = list;
  list=elm;
  elm->next=tmp->next;
  free(tmp);
}

struct list* list_pop_front(struct list *list)
{
  if (list_is_empty(list))
      return NULL;
  struct list *tmp = list->next;
  list->next->next = list->next;
  return tmp;
}

struct list* list_find(struct list *list, int value)
{
  struct list *tmp = list;
  for(;tmp->next != NULL; ++tmp)
  {
    if (tmp->data == value)
      return tmp;
  }
  return NULL;
}


int list_is_sorted(struct list *list)
{
  struct list *tmp = list;
  tmp=tmp->next;
  for(;tmp->next != NULL; ++tmp)
    {
      if(tmp->data<tmp->next->data)
	return 0;
    }
  return 1;
}


void list_rev(struct list *list)
{
  int mid = list_len(list);
  

}


0->X->Y->Z->K->A->B


