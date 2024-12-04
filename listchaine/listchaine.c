
#include "listchaine.h"

void	*list_new()
{
	return (NULL);
}

void	list_print(t_list *list)
{
	t_list *li = list;

	while (li->next != NULL)
	{
		printf("[%p] ", li);
		printf("[%s] ", (char *)li->content);
		printf("[%p] \n", li->next);
		li = li->next;
	}
	printf("[%p] ", li);
	printf("[%s] ", (char *)li->content);
	printf("[%p] \n", li->next);
}

t_list	*list_add_front(t_list *list, void *content)
{
	t_list *element;

	element = malloc(sizeof(*element));
	if(!element)
		return(list);
	element->content = content;
	element->next = list;
	return (element);
}

t_list	*list_add_back(t_list *list, void *content)
{
	t_list *li;
	t_list *element;

	li = list;
	element = malloc(sizeof(*element));
	if(!element)
		return(list);
	while (li->next != NULL)
	{
		li = li->next;
	}
	li->next = element;
	element->content = content;
	element->next = NULL;
	return (list);
}
