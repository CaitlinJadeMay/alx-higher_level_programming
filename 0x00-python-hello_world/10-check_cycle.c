#include "lists.h"

/**
* check_cycle - Write a function in C that checks if
* a singly linked list has a cycle in it
* @list: linked list to check
*
* Return: 1 if the list has a cycle, 0 if it doesn't
*/
int check_cycle(listint_t *list)
{
listint_t *cait = list;
listint_t *shaun = list;

if (!list)
return (0);

while (cait && shaun && shaun->next)
{
cait = cait->next;
shaun = shaun->next->next;
if (cait == shaun)
return (1);
}

return (0);
}
