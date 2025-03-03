//Portolani Tommaso 0001118374 13/06/2024
#ifndef LIST_H
#define LIST_H
#include "element.h"

typedef struct list_element {
	element value;
	struct list_element* next;
} item;
typedef item* list;
list emptyList(void); // PRIMITIVE
boolean empty(list);
element head(list);
list tail(list);
list cons(element, list);
void showList(list); // NON PRIMITIVE
boolean member(element, list);
int length(list l);
list append(list l1, list l2);
list reverse(list l);
list copy(list l);
list delete(element el, list l);
void freelist(list l);
list insord(element el, list l);
list inputordlist(int n);
#endif
