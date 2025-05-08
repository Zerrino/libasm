#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>


void free_list(t_list *list)
{
    t_list *tmp;
    while (list)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}


void hey(void)
{
    t_list *list = NULL;

    ft_list_push_front(&list, "Troisième");
    ft_list_push_front(&list, "Deuxième");
    ft_list_push_front(&list, "Premier");

    printf("Taille de la liste : %d\n", ft_list_size(list));

    // Affiche les données (en supposant des strings pour l'exemple)
    for (t_list *node = list; node != NULL; node = node->next)
        printf(" - %s\n", (char *)node->data);

    free_list(list);
}


int	main(void)
{

	char *st = "sallt\n";
	//char *xs = "saxllt\n";
	char te[10] = {0};
	ft_write(1, st, 6);
	//int a = ft_strlen(st);
	//printf("value : %d\n", a);
	//ft_strcpy(te, st);
	ft_write(1, ft_strcpy(te, st), 6);
	printf("len : %ld, %ld\n", ft_strlen(st), ft_strlen(te));
	printf("len : %ld, %ld\n", strlen(st), strlen(te));
	printf("size : %d\n", ft_strcmp(st, st));
	ft_strcmp(st, te);
	//printf("size : %d\n", strcmp(st, st));

	char *sec = ft_strdup(st);
	//ft_strcpy(sec, st);
	ft_write(1, sec, 6);
	printf("len : %ld, %ld\n", ft_strlen(sec), ft_strlen(sec));
	free(sec);
	hey();
	return 0;
}

