#ifndef LISTCHAINE_H
# define LISTCHAINE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void		*list_new();
void		list_print(t_list *list);
t_list		*list_add_front(t_list *list, void *content);
t_list	*list_add_back(t_list *list, void *content);

# endif
