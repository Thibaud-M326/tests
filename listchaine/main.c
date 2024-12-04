//objectif, creer des fonction pour
//creer, lire, ajouter front, et back,
//supprimer front et back
//compter la taille de la liste
//donner l'element a une tailee donne
//comprendre les pointeurs sur structure
//et leur implication dans un liste chaine


#include "listchaine.h"

int  main(void)
{
	t_list	*list;

	list = list_new();
	list = list_add_front(list, "25");
	list = list_add_front(list, "24");
	list = list_add_front(list, "23");
	list = list_add_back(list, "26");
	list = list_add_back(list, "27");
	list_print(list);
}
